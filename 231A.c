#include <stdio.h>
 
int main(){
  int n,a,b,c,flag=0,i;
  scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%d %d %d",&a,&b,&c);
  if(a==0 && b==1 && c==1)
  {
    flag++;
  }
   else if(a==1 && b==1 && c==0)
  {
    flag++;
  }
 else  if(a==1 && b==0 && c==1)
  {
    flag++;
  }
  else  if(a==1 && b==1 && c==1)
  {
    flag++;
  }
}
printf("%d",flag);
  return 0;
}