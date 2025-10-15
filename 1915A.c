#include <stdio.h>

int main()
{
  int n, i;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++)
  {
    int d, b, c;
    scanf("%d %d %d", &d, &b, &c);
    if ( b==c)
       a[i]=d;
    else if ( d==c)
      a[i]=b;
    else if (d==d )
       a[i]=c;
  }
    for (i = 0; i < n; i++){
      printf("%d \n",a[i]);
    }

  return 0;
}