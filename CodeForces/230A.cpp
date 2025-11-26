#include<bits/stdc++.h>
using namespace std;

int main(){
int fuerza, dragones;
vector<pair<int,int>>game;
cin>>fuerza>>dragones;
while(dragones--){
 int x=0, y=0;
 cin>>x>>y;
 game.push_back({x,y});
}//while

sort(game.begin(), game.end());

bool f=true;

for(int i=0; i<game.size(); i++){
  if(fuerza > game[i].first){
    fuerza+=game[i].second;
  }else{
  f=false;
  break;
  }
}

if(f){
cout<<"YES\n";
}else{
 cout<<"NO\n";
}


return 0;
}
