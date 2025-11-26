#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
string str = "";
set<string>j;
while(getline(cin, str)){

j.insert(str);
}
cout<<j.size()<<"\n";
  return 0;
 }

