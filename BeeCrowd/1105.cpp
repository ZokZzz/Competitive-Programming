#include<bits/stdc++.h>

using namespace std;

int main(){
int B=0, N=0;
while(cin>>B>>N){
if(B==0 && N==0){
return 0;
}
int c=0, d=0, v=0;
bool f=true;
int reservas[B];
for(int i=0; i<B; i++){
cin>>reservas[i];
}
for(int i=0; i<N; i++){
cin>>d>>c>>v;
reservas[d-1]= (reservas[d-1]-v);
reservas[c-1]= (reservas[c-1]+v);
}

for(int i=0; i<B; i++){
if(reservas[i]<0){
f=false;
   }
}

if(f==true){
    cout<<"S\n";
}else{

cout<<"N\n";
}

    }

return 0;
}
