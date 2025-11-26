#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
bool f=false;
string s;
while(getline(cin, s)){

 string aux = s;

 aux.erase(0, aux.find_first_not_of(" \t"));
 aux.erase(aux.find_last_not_of(" \t") + 1);

 if(aux=="<body>"){
    f=true; continue;
 }//if

 if(aux=="</body>"){
    f=false; continue;
 }//if

 if(f){

    cout<<s<<"\n";

 }//f



}//while

return 0;
}
