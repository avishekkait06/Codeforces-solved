#include <stdio.h>

int main()
{
  int n, x = 0, i;
  scanf("%d", &n);
  char str[5];
  for (i = 0; i < n; i++)
  {
    scanf("%s", str);
    if (strcmp(str, "++X") == 0 || strcmp(str, "X++") == 0)
    {
      x++;
    }
    else if (strcmp(str, "--X") == 0 || strcmp(str, "X--") == 0)
    {
      x--;
    }
  }
  printf("%d", x);

  return 0;
}