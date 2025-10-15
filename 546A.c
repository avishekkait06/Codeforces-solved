#include <stdio.h>
#include <stdlib.h>

int main(){
  int k,n,w,i,fm,j=0;
  scanf("%d %d %d",&k,&n,&w);
  for(i=1;i<=w;i++){
    fm=i*k;
n=n-fm;
  }
  if(n>0){
    printf("%d\n",j);
    return 0;
  }

  n=abs(n);
  printf("%d",n);
  return 0;
}