#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
int n;
cin>>n;
vector<int>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}

bool f = false;

for(int i=0; i<n-1; i++){
if(a[i]>a[i+1]){f=true;}//if
}//for

int ans = INT_MAX;
for(int i=0; i<n-1; i++){
int x = a[i], y = a[i+1];
int z = floor((y-x)/2);
z++;
ans = min(ans, z);

}//for

if(f==true){
    cout<<0<<"\n";
}else{

cout<<ans<<"\n";
}//if



}//while
return 0;
}

