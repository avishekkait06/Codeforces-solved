#include <stdio.h>
#include <string.h>

int main() {
    char str[1005];
    scanf("%1004s", str);

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 'a' + 'A';
    }

    printf("%s\n", str);
    return 0;
}