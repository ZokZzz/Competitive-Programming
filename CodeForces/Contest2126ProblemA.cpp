#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

set<int>se;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
    string s;
    cin>>s;
   for(int i=0; i<s.size(); i++){
       int a = s[i]-'0';
        se.insert(a);
    }//for

    for(auto it : se){
        cout<<it<<"\n";
        break;
    }//for
    se.clear();
}//while

return 0;
}
