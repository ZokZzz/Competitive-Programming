#include<bits/stdc++.h>
using namespace std;

const int TAM = 5;

int main(){
int matriz[TAM][TAM];
int c=0;
for(int i=0; i<TAM; i++){
 for(int j=0; j<TAM; j++){
  cin>>matriz[i][j];
 }
}//for anidado

int fila=0, columna=0;


for(int i=0; i<TAM; i++){
 for(int j=0; j<TAM; j++){
  if(matriz[i][j] == 1){
   fila = i+1;
   columna = j+1;

  }//if
 }
}//for anidado


while(fila!=3){

if(fila>3){
  c++;
 fila--;

} else if(fila<3){
 c++;
 fila++;

}




}//while

while(columna!=3){
 if(columna>3){
 c++;
 columna--;

} else if(columna<3){
 c++;
 columna++;


}

}//while


cout<<c<<"\n";

return 0;

}
