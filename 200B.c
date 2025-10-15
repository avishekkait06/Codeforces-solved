#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double p;
        scanf("%lf", &p);
        sum += p;
    }
    printf("%.12f\n", sum / n);
    return 0;
}