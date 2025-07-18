#include <stdio.h>

int main() {
    int a[10] = {4,5, 6, 75, 5, 5, 12};
    int i, j;
    int n = 7; 

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                break; 
            }
        }
        if (j == n) { 
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
