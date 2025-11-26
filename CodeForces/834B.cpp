#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int alpha = 26;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, k;
cin>>n>>k;
set<char>se;
vector<int>f1(alpha, 0), f2(alpha, 0);
string s;
cin>>s;


for(char c : s){
   int f = c- 'A';
    f1[f]++;
}//for


bool flag=false;

for(char c : s){
    int f = c- 'A';
    f2[f]++;
    se.insert(c);

    auto it = se.find(c);


    if(se.size()>k){
        flag=true;
    }//if

    if(f2[f]==f1[f] && it!=se.end()){
        se.erase(c);
    }//if

}//for

if(flag){
    cout<<"YES\n";
}else{
    cout<<"NO\n";
}//if


return 0;
}
