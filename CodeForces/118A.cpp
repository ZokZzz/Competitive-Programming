#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
string sinvocales, respuesta;
transform(str.begin(), str.end(), str.begin(), ::tolower);

for(char c : str){
if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){
sinvocales += c;
}//if
}//for


for(char c : sinvocales){
respuesta += '.';
respuesta += c;
}//for

cout<<respuesta<<"\n";




return 0;
}
