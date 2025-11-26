#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
int a[n];
for(int i=1; i<=n; i++){
cin>>a[i];
}
int posiciones[n];
for(int i=1; i<=n; i++){
posiciones[i]=0;
}

for(int i=1; i<=n; i++){
posiciones[a[i]]=i;
}

for(int i=1; i<=n; i++){
cout<<posiciones[i];
cout<<" ";
}

cout<<"\n";

return 0;
}
