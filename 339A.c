#include <stdio.h>
 
int main()
{
    char s[105];
    scanf("%s", s);
 
    int one = 0, two = 0, three = 0;
 
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '1')
            one++;
        else if (s[i] == '2')
            two++;
        else if (s[i] == '3')
            three++;
    }
 
    for (int i = 0; i < one; i++)
    {
        if (i > 0)
 
            printf("+");
 
        printf("1");
    }
 
    for (int i = 0; i < two; i++)
    {
        if (one > 0 || i > 0)
            printf("+");
        printf("2");
    }
 
    for (int i = 0; i < three; i++)
    {
        if (one > 0 || two > 0 || i > 0)
            printf("+");
        printf("3");
    }
 
    return 0;
}