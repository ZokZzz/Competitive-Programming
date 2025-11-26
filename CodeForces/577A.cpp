#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
long long n=0, x=0, c=0;
cin>>n>>x;

for(int i=1; i<=n; i++){
   if(x%i==0 && x/i <=n){
        c++;
   }//if

}//for

cout<<c<<"\n";

return 0;
}

