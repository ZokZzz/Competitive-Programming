#include<bits/stdc++.h>
using namespace std;
int main(){
int year=0;
cin>>year;
int ans = year+1;
set<char>n;
while(n.size()<6){
string y = to_string(ans);
for(int i=0; i<y.size(); i++){
 n.insert(y[i]);
}
if(n.size()<4){
ans++;
n.clear();
}else{
cout<<ans<<"\n";
break;
}

}//while




return 0;
}
