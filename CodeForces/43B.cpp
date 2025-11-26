#include<bits/stdc++.h>
using namespace std;

int entero(char c){
    if(c<=90){
     return (c-'A')+26;
    }else{
 return c-'a';
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
const int t = 52;
string s;
vector<int> frecuencia(t, 0);
vector<int> frecuencia2(t, 0);
getline(cin, s);
for(int i = 0; i < s.size(); i++){
    if(s[i]!=' ')frecuencia[entero(s[i])]++;

}
getline(cin, s);
for(int i = 0; i < s.size(); i++){
    if(s[i]!=' ')frecuencia2[entero(s[i])]++;

}
bool b = 1;



for(int i=0; i<t; i++){
      if(frecuencia[i]<frecuencia2[i]){b=0;}
}

if(b){
    cout<<"YES\n";
}else{
    cout<<"NO\n";
}

return 0;
}
