#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
vector<int>teams(4,0);
vector<int>skills;
vector<int>winners;
for(int i=0; i<4; i++){
cin>>teams[i];
skills.push_back(teams[i]);
}//for

sort(skills.begin(), skills.end());

if(teams[0]>teams[1]){
   winners.push_back(teams[0]);
}else{
   winners.push_back(teams[1]);
}//if

if(teams[2]>teams[3]){
   winners.push_back(teams[2]);
}else{
   winners.push_back(teams[3]);
}//if

sort(winners.begin(), winners.end());

if(winners[0]==skills[2] && winners[1]==skills[3]){
cout<<"YES\n";
}else{
cout<<"NO\n";
}//if


}//while


return 0;
}
