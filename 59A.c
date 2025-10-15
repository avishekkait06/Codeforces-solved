#include <stdio.h>

int main() {
    char s[101];
    int up = 0, low = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            up++;
        else
            low++;
    }
    if (up > low) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
        }
    } 
    else {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
    }
    printf("%s", s);
    return 0;
}