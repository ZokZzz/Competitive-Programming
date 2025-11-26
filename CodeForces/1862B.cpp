#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
int m;
cin>>m;
vector<int>b(m);
   for(int i=0; i<m; i++){
    cin>>b[i];
   }//for
    vector<int>fin;
    for(int i=0; i<m-1; i++){
    fin.push_back(b[i]);
    if(b[i]<b[i+1]){
    fin.push_back(b[i+1]-b[i]);
    }//if

   }//for
   fin.push_back(b[m-1]);

   cout<<fin.size()<<"\n";
   for(int i=0; i<fin.size(); i++){
    cout<<fin[i];
    if(i==fin.size()-1){
        cout<<"\n";
    }else{
    cout<<" ";
    }//if
   }//for

}//while
return 0;
}
