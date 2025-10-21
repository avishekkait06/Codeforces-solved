#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char str[] = "codeforces";
    while (t--)
    {
        char str1[20];
        scanf("%s", str1);
        int cnt = 0;
        for (int i = 0; i < 10; i++)
        {
            if (str[i] != str1[i])
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
