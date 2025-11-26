#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
long long a, b, n, c=0;
cin>>a>>b>>n;

while(true){
    if(a+b>n){
        break;
    }//if

    if(a>b){
        b+=a;
        c++;
    }else{
     a+=b;
     c++;
    }//if

}//while

cout<<(c+1)<<"\n";
}//for
return 0;
}
