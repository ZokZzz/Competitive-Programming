#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
int p, q;
cin>>p;
set<int>game;
int little[200];

for(int i=0; i<p; i++){
cin>>little[i];
}

cin>>q;

for(int i=p; i<p+q; i++){
cin>>little[i];
}

for(int i=0; i<p+q; i++){
game.insert(little[i]);
}

if(game.size()==n){
cout<<"I become the guy.\n";
} else{
cout<<"Oh, my keyboard!\n";
}

return 0;
}
