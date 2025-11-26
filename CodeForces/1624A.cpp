#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t-->0){
int n, sum=0;
cin>>n;
vector<int>a(n, 0);
set<int>sorner;
for(int i=0; i<n; i++){
    cin>>a[i];
    sorner.insert(a[i]);
}//for

cout<<(*sorner.rbegin()-*sorner.begin())<<"\n";

}//while
return 0;
}

