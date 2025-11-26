#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<"x: "<<x<<"\n"



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n;
cin>>n;
vector<int>a(n), b(n);
for(int i=0; i<n; i++){
    cin>>a[i];
    b[i]=a[i];
}//for

sort(b.begin(), b.end());

vector<int>mapp(n);

for(int i=0; i<n; i++){
    int pos = lower_bound(b.begin(), b.end(), a[i])-b.begin();
    mapp[i] = pos;
}//for

int le = 0;

while(le<n && mapp[le]==le)le++;//while

if(le == n){
   cout<<"yes\n";
   cout<<1<<" "<<1<<"\n";
    return 0;
}//if

int ri = n-1;

while(ri>=0 && mapp[ri]==ri)ri--;//while

reverse(mapp.begin()+le, mapp.begin()+ri + 1);

int f = 1;

for(int i=1; i<n; i++){
  if(mapp[i-1]>mapp[i]){
      f=0;
      break;
     }//if
}//for


if(f){
   cout<<"yes\n";
   cout<<(le+1)<<" "<<(ri+1)<<"\n";
   return 0;

}else{
   cout<<"no\n";
   return 0;

}//if


return 0;
}
