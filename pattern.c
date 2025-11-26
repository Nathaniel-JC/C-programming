

#include <stdio.h>

int pattern(int n);

int main() {
    int n;

    printf("how big you want the triangle to be? ");
    scanf("%d", &n);   // <- &n is required

    pattern(n);        // <- correct function call

    return 0;
}

int pattern(int n) {

    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
