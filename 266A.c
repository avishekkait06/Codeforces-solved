#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    char s[55];
    scanf("%d", &n);
    scanf("%s", s);
 
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }
 
    printf("%d\n",  count);
    return 0;
}