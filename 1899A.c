#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
while(t--){
    int n;
    scanf("%d",&n);
    if(n%3!=0)
    printf("First\n");
    else 
    printf("Second\n");
}
return 0;
}