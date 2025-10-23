#include <stdio.h>

int main(){
  int t,c;
  scanf("%d",&t);
  while(t--){
int a,b;
scanf("%d %d",&a,&b);
if(a>b){
c = a;
a=b;
b=c ;
printf("%d %d\n",a,b);}
else
printf("%d %d\n",a,b);
  }
  return 0;
}