#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
int a[n];
for(int i=0; i<n; i++){
cin>>a[i];
}

int basemayor = a[0], basemenor = a[0], c=0;

for(int i=1; i<n; i++){
if(a[i]>basemayor){
basemayor =a[i];
c++;
}
}

for(int i=1; i<n; i++){
if(a[i]<basemenor){
basemenor =a[i];
c++;
}
}

cout<<c<<"\n";


return 0;
}
