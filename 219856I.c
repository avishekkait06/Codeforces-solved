#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[1001];
    scanf("%s", str1);

    int len = strlen(str1);
    bool equal = true;

    for (int i = 0; i < len / 2; i++) {
        if (str1[i] != str1[len - 1 - i]) {
            equal = false;
            break;
        }
    }

    if (equal)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
