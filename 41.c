#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char str1[100];
    int a = 0;

    scanf("%s", str);
    scanf("%s", str1);

    int t = strlen(str);
    for (int i = 0; i < t; i++) {
        if (str[i] != str1[t - i - 1]) {
            a = 1;
            break;
        }
    }

    if (a == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
