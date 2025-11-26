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
    if(n%3==0){
        cout<<"Second\n";
    }else{
        cout<<"First\n";
    }//if
}//while

return 0;
}
