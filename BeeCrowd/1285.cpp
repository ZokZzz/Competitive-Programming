#include<bits/stdc++.h>
using namespace std;
int main(){
unsigned long long int n, m;
while(cin>>n>>m){
    int c=0;
set<char>numeros;
 for(int i=n; i<=m; i++){
    string str= to_string(i);
    for(int j=0; j<str.size(); j++){
    numeros.insert(str[j]);
    }//for j

   if(str.size() == numeros.size()){
    c++;
   }

    numeros.clear();

 }//for i

 cout<<c<<"\n";


}//while
return 0;
}
