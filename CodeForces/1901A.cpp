#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
  int n, x;
    cin >> n >> x;
    int p = 0, ans = 0;
    for (int i=0; i<n; i++){
      int a; cin>>a;
      ans = max(ans, a-p);
      p = a;
    }//for
    ans = max(ans, 2*(x-p));
    cout<<ans<<"\n";
}//while
return 0;
}
