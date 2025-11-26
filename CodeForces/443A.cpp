#include<bits/stdc++.h>
using namespace std;
int main(){
set<char>sorner;
string str=" ";
getline(cin, str);
for(int i=0; i<str.size(); i++){
if(str[i]=='{' || str[i]==',' || str[i]==' '){
} else{
sorner.insert(str[i]);
}

}//for

cout<<sorner.size()-1<<"\n";

return 0;
}
