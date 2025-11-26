#include<bits/stdc++.h>
using namespace std;
#define ill unsigned long long int

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
 ill n, k;
  cin>>n>>k;
  ill sorner = (k-1)/(n-1);

cout<<(k+sorner)<<"\n";

}//while
return 0;
}
