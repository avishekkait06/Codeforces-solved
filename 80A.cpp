#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int porarda = 0;
    for(int i=n+1;i<=50;i++){
   int prime= 1;
for(int j=2;j*j<=i;j++){
  if(i%j==0){
    prime=0;
    break;
  }
}
if(prime){
porarda=i;
break;}
}
if(porarda==m){
  printf("YES\n");
}
else if (porarda!=m){
  printf("NO\n");
}
return 0;}