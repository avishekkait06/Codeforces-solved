#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  int arr[t];
  int odd=0; int even=0;
  while(t--){
for(int i=0;i<t;i++){
  scanf("%d",arr[i]);
if(arr[i]%2==0){
  even = even+1;
}
else
odd = odd+1;
}

  }
  if(even)
  printf("%d",even);
  else
    printf("%d",odd);


  return 0;
}