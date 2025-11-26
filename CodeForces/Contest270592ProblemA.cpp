#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<"#x: "<<x<<"\n"

bool bit(int x, int b){
return (x>>b)&1;
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
int n;
cin>>n;

for(int i=0; i<(1<<n); i++){
    for(int j=n-1; j>=0; j--){
        if(bit(i, j)) cout<<1;
        else cout<<0;
    }//for
    cout<<"\n";
}//for



}//while
return 0;
}
