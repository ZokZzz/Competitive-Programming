#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
long int a, b ,c, n;
cin>>a>>b>>c>>n;
vector<long int>coins;
coins.push_back(a);
coins.push_back(b);
coins.push_back(c);
sort(coins.rbegin(), coins.rend());
long int equals = ((coins[0]-coins[1])+(coins[0]-coins[2]));
n = n-equals;

if(n%3==0 && n>=0){
cout<<"YES\n";
}else{
cout<<"NO\n";
}


}//while
return 0;
}

