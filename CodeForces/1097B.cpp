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

int n;
cin>>n;

vector<int>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for

int s=0;

bool f = false;

for(int i=0; i<(1<<n); i++){
    for(int j=0; j<n; j++){

        if(bit(i, j)){ s+=a[j];}else{s-=a[j];}//if

    }//for

    if(s%360==0){f = true; break;}//if
    s=0;

}//for

f == true? cout<<"YES\n" : cout<<"NO\n";


return 0;
}
