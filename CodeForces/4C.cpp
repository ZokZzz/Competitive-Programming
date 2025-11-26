#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
map<string, int>m;
int n;
cin>>n;
for(int i=0; i<n; i++){
 string aux;
 cin>>aux;
 auto it = m.find(aux);
 if(it == m.end()){
    m.insert({aux, 0});
    cout<<"OK\n";
 }else{
  it->second ++;
  cout<<it->first<<it->second<<"\n";
 }//if

}//for
return 0;
}
