#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
  int n=0, m=0;
  cin>>n>>m;
  vector<int>a(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  }//for
     int c=0;
   sort(a.rbegin(), a.rend());
     int i=0;
    while(m!=0){
     if(m>=a[i]){
        m=m-a[i];
        c++;
     } else{
         i++;
     }//if
    }//while

    cout<<c<<"\n";
    c=i=0;

}//while
return 0;
}
