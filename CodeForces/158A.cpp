#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0, k=0, c=0;
cin>>n>>k;
int a[n];
for(int i=0; i<n; i++){

    cin>>a[i];
}
int b=a[k-1];
for(int i=0; i<n; i++){
    if(a[i]>=b && a[i]>0){

        c=c+1;
    }
}
cout<<c<<"\n";
return 0;
}
