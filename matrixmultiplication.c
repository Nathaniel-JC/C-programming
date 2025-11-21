#include <stdio.h>

int main() {
    int r1, c1, r2, c2; 
    int i, j, k;        
   
    //  dimensions for the First Matrix (A)
    printf("--- First Matrix ---\n");
    printf("Give the number of rows (r1): ");
    if (scanf("%d", &r1) != 1) return 1; 
    printf("Give the number of columns (c1): ");
    if (scanf("%d", &c1) != 1) return 1;

    //  dimensions for the Second Matrix (B)
    printf("\n--- Second Matrix ---\n");
    printf("Give the number of rows (r2): ");
    if (scanf("%d", &r2) != 1) return 1;
    printf("Give the number of columns (c2): ");
    if (scanf("%d", &c2) != 1) return 1;

    
    while (c1 != r2) {
        printf("\nERROR!! For multiplication, the number of columns in the first matrix (%d) must equal the number of rows in the second matrix (%d).\n", c1, r2);

        // Re-input Dimensions
        printf("\nPlease re-enter dimensions:\n");
        
        printf("First Matrix Rows (r1): ");
        if (scanf("%d", &r1) != 1) return 1;
        printf("First Matrix Columns (c1): ");
        if (scanf("%d", &c1) != 1) return 1;

        printf("Second Matrix Rows (r2): ");
        if (scanf("%d", &r2) != 1) return 1;
        printf("Second Matrix Columns (c2): ");
        if (scanf("%d", &c2) != 1) return 1;
    }

   
    int first[r1][c1];
    int second[r2][c2];
    int final[r1][c2];

    // 3. Input Elements for First Matrix
    printf("\n--- Giving values for First Matrix (%d x %d) ---\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter first[%d][%d]: ", i, j);
            if (scanf("%d", &first[i][j]) != 1) return 1;
        }
    }

    // 4. Input Elements for Second Matrix
    printf("\n--- Giving values for Second Matrix (%d x %d) ---\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter second[%d][%d]: ", i, j);
            if (scanf("%d", &second[i][j]) != 1) return 1;
        }
    }
// printing both matrices
printf("first matrix\n");
for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d\t", first[i][j]);
        }
        printf("\n");
    }


    //second
    printf("second matrix\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", second[i][j]);
        }
        printf("\n");
    }

    // 5. Initializing Final Matrix to Zero
   
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            final[i][j] = 0;
        }
    }

   
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                final[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    
    printf("\n--- Resultant Matrix (Multiplication of First and Second) (%d x %d) ---\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", final[i][j]);
        }
        printf("\n");
    }

    return 0;
}
