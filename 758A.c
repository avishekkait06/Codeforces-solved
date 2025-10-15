#include <stdio.h>

int main() {
    int n, a[100], max = 0, sum = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max) max = a[i];
    }
    
    for(int i = 0; i < n; i++) {
        sum += max - a[i];
    }
    
    printf("%d\n", sum);
    return 0;
}
 