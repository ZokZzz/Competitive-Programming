#include<bits/stdc++.h>
using namespace std;

int main(){
int n, planes, m=0, M=0;
cin>>n>>planes;
priority_queue<int, vector<int>, greater<int>>mini;
priority_queue<int>maxi;
int ai = n, as=n;
for(int i=0; i<planes; i++){
    int aux;
    cin>>aux;
    mini.push(aux);
    maxi.push(aux);
}//for

while(ai--){
  int aux = mini.top();
  mini.pop();
  m+= aux;
  if(aux-1>0){
    mini.push(aux-1);
  }//if

}//while


while(as--){
  M+=maxi.top();
  int aux = maxi.top();
  aux--;
  maxi.push(aux);
  maxi.pop();
  if(maxi.top()==0){
    maxi.pop();
  }//if

}//while

cout<<M<<" "<<m<<"\n";

return 0;
}

