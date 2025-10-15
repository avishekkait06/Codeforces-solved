#include <stdio.h>

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long odd_count = (n + 1) / 2;

    if (k <= odd_count) {
        printf("%lld\n", 2 * k - 1);
    } else {
        printf("%lld\n", 2 * (k - odd_count));
    }

    return 0;
}