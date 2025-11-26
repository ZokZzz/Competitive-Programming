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
 vector<int>a(n, 0);
 for(int i=0; i<n; i++){
    cin>>a[i];
 }//for
    sort(a.begin(), a.end());
    int base = a[0], residuo=0;
     sort(a.rbegin(), a.rend());
    for(int i=0; i<n-1; i++){
    residuo += (a[i]-base);
 }//for
    cout<<residuo<<"\n";
}//while


return 0;
}
