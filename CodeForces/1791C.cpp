#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t-->0){
 unsigned long long int n;
 cin>>n;
 string s;
 cin>>s;
 unsigned long long int l=0, r=n-1;
 while(l<=r){
    if(s[l]==s[r]){break;}//if
    l++;
    r--;
 }//while

    cout<<r-l+1<<"\n";

}//while

return 0;
}
