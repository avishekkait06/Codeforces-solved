#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int a;
scanf("%d",&a);
int n1=a%10;
int n2=a/10;
printf("%d\n",n1+n2);
}
return 0;
}