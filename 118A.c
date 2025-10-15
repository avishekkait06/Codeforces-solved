#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_vowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i';
}

int main() {
    char s[101];
    scanf("%100s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (!is_vowel(ch)) {
            printf(".%c", ch);
        }
    }

    printf("\n");
    return 0;
}