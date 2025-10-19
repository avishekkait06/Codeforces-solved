#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[1000];
    char str1[1000];
    int a = 0;
 
    scanf("%s", str);
    scanf("%s", str1);
 
    int t = strlen(str);
 
    if(t!=strlen(str1))
    {
        printf("NO");
        return 0;
    }
 
    for (int i = 0; i < t; i++)
    {
        if (str[i] != str1[t - i - 1])
        {
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