#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int a, b;
      
    printf("Give two numbers for swapping:\n");
    printf("Enter number A: ");
    scanf("%d", &a);
    printf("Enter number B: ");
    scanf("%d", &b);

    printf("\nBefore swapping: A = %d, B = %d\n", a, b);

    swap(&a, &b);
      
    printf("After swapping: A = %d, B = %d\n", a, b);
    
    return 0; 
}
 
void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
