#include<stdio.h>
int main ()
{
    int i,n,k,t=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0; i<n; i++)
    {
 
        scanf("%d",&a[i]);
 
 
    }
    for(i=0; i<n; i++)
    {
        {
            if(a[i]>=a[k-1] && a[i]>0)
                t++;
 
 
        }
    }
    printf("%d",t);
 
 
    return 0;
}
