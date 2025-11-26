#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
 vector<int>sorner(2);
 cin>>sorner[0]>>sorner[1];
 sort(sorner.begin(), sorner.end());
 cout<<sorner[0]<<" "<<sorner[1]<<"\n";
}//while
return 0;
}



