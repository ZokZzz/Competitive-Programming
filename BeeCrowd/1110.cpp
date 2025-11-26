#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
while(cin>>n && n){
 vector<int>dc;
 deque<int>sorner;
 for(int i=1; i<=n; i++){
    sorner.push_back(i);
 }

 while(sorner.size()!=1){
  dc.push_back(sorner.front());
  sorner.pop_front();
  sorner.push_back(sorner.front());
   sorner.pop_front();

 }//for

 cout<<"Discarded cards: ";
 for(int i=0; i<dc.size(); i++){
    cout<<dc[i];
    if(i==dc.size()-1){
     cout<<"\n";
    }else{
        cout<<", ";
    }//if

 }//for

cout<<"Remaining card: "<<sorner.front()<<"\n";


}//while
return 0;
}
