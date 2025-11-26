#include<bits/stdc++.h>
using namespace std;
const int tam = 3;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
bool matriz [tam][tam];
for(int i=0; i<tam; i++){
    for(int j=0; j<tam; j++){
        matriz[i][j]=1;
    }//for
}//for anidado
int touch [tam][tam];
for(int i=0; i<tam; i++){
    for(int j=0; j<tam; j++){
        cin>>touch[i][j];
    }//for
}//for anidado

for(int i=0; i<tam; i++){
    for(int j=0; j<tam; j++){
        if(touch[i][j]%2!=0){
            if(i>0) matriz[i-1][j]        = !matriz[i-1][j];
            if(i< tam - 1) matriz[i+1][j] = !matriz[i+1][j];
            if(j>0) matriz[i][j-1]        = !matriz[i][j-1];
            if(j<tam - 1) matriz[i][j+1]  = !matriz[i][j+1];
            matriz[i][j] = !matriz[i][j];
        }//if
    }//for
}//for anidado


for(int i=0; i<tam; i++){
    for(int j=0; j<tam; j++){
        cout<<matriz[i][j];
    }//for
    cout<<"\n";
}//for anidado



return 0;
}
