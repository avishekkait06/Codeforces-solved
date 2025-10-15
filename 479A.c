#include <stdio.h>

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int x[6];
  x[0] = a + b + c;
  x[1] = a * b * c;
  x[2] = (a + b) * c;
  x[3] = a * (b + c);
  x[4] = a + b * c;
  x[5] = a * b + c;

  int m = x[0];
  for (int i = 1; i < 6; i++)
  {
    if (x[i] > m)
    {
      m = x[i];
    }
  }

  printf("%d\n", m);
  return 0;
}