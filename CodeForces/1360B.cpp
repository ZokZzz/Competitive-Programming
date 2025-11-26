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
  vector<int>a(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  }//for

  sort(a.begin(), a.end());

   vector<int>m;

    for(int i=0; i<n-1; i++){
     m.push_back(a[i+1]-a[i]);
    }//for

    sort(m.begin(), m.end());

    cout<<m[0]<<"\n";


}//while
return 0;
}
