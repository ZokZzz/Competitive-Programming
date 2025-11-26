#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int points[4], total=0;
for(int i=0; i<4; i++){
cin>>points[i];
}
string str;
cin>>str;

for(int i=0; i<str.size(); i++){
total+=points[(str[i]-'0')-1];
}

cout<<total<<"\n";

return 0;
}


