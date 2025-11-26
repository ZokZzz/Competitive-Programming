#include<bits/stdc++.h>
using namespace std;
#define ll  unsigned long long int
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"




int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
long long y, k, n;
cin>>y>>k>>n;
bool f = true;

for(long long x= k-(y%k); x+y<=n; x+=k){
       if(x>0){
        cout<<x<<" ";
        f = false;
    }//if
}//for


if(f){
    cout<<-1<<"\n";
}//if

cout<<"\n";

return 0;
}
