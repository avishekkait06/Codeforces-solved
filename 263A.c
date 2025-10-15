#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, j;
    int a[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                printf("%d\n", abs(i - 2) + abs(j - 2));
            }
        }
    }
    return 0;
}