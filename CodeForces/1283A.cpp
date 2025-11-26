#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
int h, m;
cin>>h>>m;
if(h==23){
    cout<<(60-m)<<"\n";      // 4:20    5:00/40
    continue;
}

if(h==0){
int d=(60-m);
int x = 23*60;
cout<<(d+x)<<"\n";
    continue;
}


  h=h+1;
  int t = 60-m;
  int hm = (24-h)*60;

  cout<<(t+hm)<<"\n";

}//while

return 0;
}
