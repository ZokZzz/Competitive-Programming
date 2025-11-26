#include<bits/stdc++.h>
using namespace std;
int main(){
deque<int>game;
int n, s=0, d=0;
cin>>n;
for(int i=0; i<n; i++){
 int aux=0;
 cin>>aux;
 game.push_back(aux);
}//for
 bool f=true;
while(!game.empty()){
 if(f){

    if(game.front()>game.back()){
       s+= game.front();
       game.pop_front();
    } else{
     s+= game.back();
     game.pop_back();
    }

    f=false;

  //sereja
 }else{

     if(game.front()>game.back()){
       d+= game.front();
       game.pop_front();
    } else{
     d+= game.back();
     game.pop_back();
    }

    f=true;


 //Dima
 }//if


}//while

cout<<s<<" "<<d<<"\n";

return 0;
}
