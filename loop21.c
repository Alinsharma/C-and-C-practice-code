#include <stdio.h>

int main() {
    int i, j;
    int n = 6; // Size of the heart

    // Upper part of the heart
    for (i = n / 2; i <= n; i += 2) {
        for (j = 1; j < n - i; j += 1) {
            printf(" ");
        }
        for (j = 1; j <= i; j += 1) {
            printf("* ");
        }
        for (j = 1; j <= n - i; j += 1) {
            printf(" ");
        }
        for (j = 1; j <= i; j += 1) {
            printf("* ");
        }
        printf("\n");
    }

    
    for (i = n; i >= 1; i--) {
        for (j = i; j < n; j += 1) {
            printf("  ");
        }
        for (j = 1; j <= (i * 2) - 1; j += 1) {
            if(j==5||j==i){
                printf("* ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
