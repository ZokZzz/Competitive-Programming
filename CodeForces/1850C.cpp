#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
for(int i=0; i<8; i++){
 string aux;
 cin>>aux;
 for(int j=0; j<8; j++){
 if(aux[j]!='.'){
   cout<<aux[j];
 }//if
 }//for anidado
}//for


cout<<"\n";


}//while


return 0;
}
