#include <stdio.h>
#include <string.h>

int main() {
    int a[4];
    char s[100005];
    int total = 0;

    for(int i = 0; i < 4; i++)
        scanf("%d", &a[i]);

    scanf("%s", s);

    int len = strlen(s);

    for(int i = 0; i < len; i++) {
        int index = s[i] - '1';
        total += a[index];
    }

    printf("%d\n", total);

    return 0;
}
