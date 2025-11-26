#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
int n, k;
cin>>n>>k;
vector<int>a(n);
for(int i=0; i<n; i++){
cin>>a[i];
}//for

int aux=0; bool f = true;

for(int i=0; i<n; i++){
 if(a[i]>= aux){
    aux = a[i];
 }else{
 f=false;
 break;
 }//if
}//for


if(k == 1 && f == false){
    cout<<"NO\n";
}else{
    cout<<"YES\n";
}//if

}//while
return 0;
}
