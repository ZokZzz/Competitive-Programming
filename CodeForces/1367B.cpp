#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
 int n, e=0, o=0;
 cin>>n;
 vector<int>a(n);

 for(int i=0; i<n; i++){
    cin>>a[i];
 }//for

  if(n==1){
    if(a[0]%2==0){cout<<0<<"\n"; continue;}else{
        cout<<-1<<"\n"; continue;
    }//if anidado
 }//if

 for(int i=0; i<n; i++){
   if(i%2==0 && a[i]%2!=0){
    e++;
   }//if
   if(i%2!=0 && a[i]%2==0){
    o++;
   }//if

 }//for


 if((e-o) == 0){
    cout<<e<<"\n";
 }else{
 cout<<-1<<"\n";
 }//if

}//while



return 0;
}
