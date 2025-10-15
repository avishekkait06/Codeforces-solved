#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    for (i = 4; i < n; i++) {
        int j = n - i;

        int a = 0, b = 0;
        for (int k = 2; k < i; k++) {
        if (i % k == 0)
         a = 1;}
        for (int k = 2; k < j; k++) {
        if (j % k == 0) 
        b = 1;
        }
        if (a && b) {
            printf("%d %d\n", i, j);
            break;
        }
    }

    return 0;
}