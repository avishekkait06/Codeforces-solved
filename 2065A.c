#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    char s1[11];
    scanf("%s",s1);
    int d=strlen(s1);
        s1[d-2]='i';
    s1[d-1]=' ';

    printf("%s\n",s1);
}


return 0;
}
