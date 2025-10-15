#include <stdio.h>

int main() {
    char player[101];
    scanf("%s", player);
    
    int count = 1;
    for (int i = 1; player[i] != '\0'; i++) {
        if (player[i] == player[i - 1]) {
            count++;
            if (count >= 7) {
                printf("YES\n");
                return 0;
            }
        } else {
            count = 1;
        }
    }
    
    printf("NO\n");
    return 0;
}