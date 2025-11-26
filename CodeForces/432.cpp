#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, k, p=0, t=0;
cin>>n>>k;
vector<int>a(n, 0);
for(int i=0; i<n; i++){cin>>a[i];}//for
sort(a.begin(), a.end());
for(int i=0; i<n; i++){
  if(a[i]+k <=5){
      p++;
      if(p==3){
        t++;
        p=0;
      }//if anidado

    }//if

}//for
cout<<t<<"\n";
return 0;
}
