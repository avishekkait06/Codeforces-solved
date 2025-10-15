#include <stdio.h>
#include <math.h>
int main()
{
  long long n, sum;
  scanf("%lld", &n);
  sum= 0;
  
    sum = (((n+2)-1)/2);
  if(n%2==0)
  printf("%lld", sum);
  else
  printf("%lld", -sum);
  return 0;
}
