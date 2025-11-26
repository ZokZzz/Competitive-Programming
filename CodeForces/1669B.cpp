#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
 int n, s;
 cin>>n;
 multiset<int>a;
 set<int>b;
 bool f=false;
 for(int i=0; i<n; i++){
  int aux;
  cin>>aux;
  a.insert(aux);
  b.insert(aux);
 }//for

 for(auto it = b.begin(); it!= b.end(); it++){
    if(a.count(*it)>=3){
        f = true;
        s = *it;
    }//if
 }//for

 if(f){
    cout<<s<<"\n";
 }else{
    cout<<-1<<"\n";
 }


}//while



return 0;
}
