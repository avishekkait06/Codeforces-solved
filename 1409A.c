#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        int n = abs(a - b);
        int n1 = (n + 9) / 10;

        printf("%d\n", n1);
    }

    return 0;
}