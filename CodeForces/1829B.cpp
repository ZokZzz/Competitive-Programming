#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(nullptr);

 int t;
 cin>>t;
 while(t-->0){
 int n;
 cin>>n;
 vector<int>a(n);
 for(int i=0; i<n; i++){
cin>>a[i];
 }//for

int c=0, aux=0;

for(int i=0; i<n; i++){
 if(a[i]==0){
     aux++;
 }else{
 c = max(aux, c); aux=0;
 }//if
}//for
 c = max(aux, c);
cout<<c<<"\n";

 }//while


    return 0;
}
