#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, mx=INT_MAX, my=0;
cin>>n;
vector<pair<int,int>>a;

for(int i=0;i<n; i++){
    int x, y;
    cin>>x>>y;
    a.push_back({x,y});
}//for


for(int i=0;i<n; i++){
   if(a[i].first<mx){
    mx = a[i].first;
   }//if

   if(a[i].second>my){
    my = a[i].second;
   }//if

}//for

vector<int>positions;

for(int i=0;i<n; i++){
  if(a[i].first<=mx && a[i].second>=my){
    positions.push_back(i+1);
  }//if
}//for


if(positions.empty()){
    cout<<-1<<"\n";
}else{

for(int i=0; i<positions.size(); i++){
   cout<<positions[i];
   if(i==positions.size()-1){
    cout<<"\n";
   }else{
   cout<<" ";
   }//if
}//for


}//if

return 0;
}
