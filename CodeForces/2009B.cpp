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
char m [n][4];
for(int i=0; i<n; i++){
    for(int j=0; j<4; j++){
        cin>>m[i][j];
    }//for
}//for
vector<int>x;
for(int i=0; i<n; i++){
    for(int j=0; j<4; j++){
        if(m[i][j]=='#'){x.push_back(j+1);}//if
    }//for
}//for

for(int i=x.size()-1; i>=0; i--){
    cout<<x[i];
    if(i==0){
        cout<<"\n";
    }else{
        cout<<" ";
    }//if
}//for

}//while
return 0;
}

