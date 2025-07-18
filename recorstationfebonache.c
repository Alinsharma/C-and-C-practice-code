#include <stdio.h>

int a(int x) {
    static int l = 0, y = 1;
    if (x == 0) {
        return 0;
    } else {
        int m = l + y;
        printf("%d\n", m);
        l = y;
        y = m;
        return a(x - 1);
    }
}

int main() {
   
    printf("0\n\n");
    a(10);
    
}
