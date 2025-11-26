#include<bits/stdc++.h>
using namespace std;
#define ll  unsigned long long int
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n; cin>>n;
vector<int>a(8, 1e8); a[0]=0;

for(int i=0; i<n; i++){
   int x;
   cin>>x;
   string s;
   cin>>s;
   int bitmask=0;
   for(char c : s) bitmask |= (1<<(c-'A'));
   a[bitmask] = min(a[bitmask], x);

}//for

int ans = 1e8;

for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            for(int k=0; k<8; k++){
                if((i|j|k)==7){
                 ans = min(ans, a[i]+a[j]+a[k]);
                }//if
            }//for k

   }//for j


}//for i

if(ans == 1e8){
    cout<<-1<<"\n";
}else{
cout<<ans<<"\n";
}//if

return 0;
}
