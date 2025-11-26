#include<bits/stdc++.h>
using namespace std;
#define ll  unsigned long long int
#define pb push_back
#define debug(x) cout<<"x: "<<x<<"\n"




int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, ans=0;
cin>>n;

for(int a=1; a<=n; a++){
   for(int b=1; b<=n; b++){
       int auxa = a*a, auxb = b*b;
       int c2 = auxa+auxb;
       int c = sqrt(c2);
       if(auxa + auxb == c*c && c<=n){ans++;}
       }//for b
}//for a

cout<<ans/2<<"\n";

return 0;
}
