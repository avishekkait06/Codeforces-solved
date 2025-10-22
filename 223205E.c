#include<stdio.h>
void swap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("%d %d",x,y);
}
int main(){
 int a,b;
 scanf("%d %d",&a,&b);
 swap(a,b);
return 0;
}
