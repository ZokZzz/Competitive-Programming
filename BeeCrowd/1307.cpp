#include<bits/stdc++.h>
using namespace std;

string sorner(bool f){
if(f){
  return "All you need is love!";
}else{
  return "Love is not all you need!";
}//if

}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long long int t, aux=1;
cin>>t;
while(t--){
  bool f=false;
  string s, l;
  cin>>s>>l;
  long long int x = stoll(s), y = stoll(l);
  if(__gcd(x, y)>1){f=true;}//if
  cout<<"pair #"<<aux<<": "<<sorner(f)<<"\n";
  aux++;
}//while

return 0;
}
