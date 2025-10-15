#include <stdio.h>

int main(){
 int n;
  scanf("%d", &n);
int step =0;
while(n>0){
  n=n-5;
  step++;
}
printf("%d",step);
  return 0;
}