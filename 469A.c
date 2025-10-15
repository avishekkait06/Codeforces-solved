#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x;
    scanf("%d", &x);
    int a[1000];

    for (int i = 0; i < x; i++) {
        scanf("%d", &a[i]);
    }

    int y;
    scanf("%d", &y);
    for (int i = x; i < x + y; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < x + y; i++) {
        for (int j = i + 1; j < x + y; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    int flag = -1, cnt = 0;
    for (int i = 0; i < x + y; i++) {
        if (a[i] == flag) {
            continue;
        } else {
            cnt++;
            flag = a[i];
        }
    }

    if (cnt == n) {
        printf("I become the guy.");
    } else {
        printf("Oh, my keyboard!");
    }

    return 0;
}