#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, le=0, ri=0, s=0;
cin>>n;

    for(int i=0; i<n; i++){
    int l, r;
    cin>>l>>r;
    if(l==1) le++;
    if(r==1) ri++;
    }


   if(le>=(n>>1)+1){
    s+= (n-le);
   }else{
    s+=le;
   }

    if(ri>=(n>>1)+1){
    s+= (n-ri);
   }else{
   s+=ri;
   }

    cout<<s<<"\n";


return 0;
}
