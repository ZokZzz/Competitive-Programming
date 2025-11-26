#include<bits/stdc++.h>
using namespace std;
int main(){
long long tt;
cin>>tt;
long long sorner = 0;
while(tt--){
bool f=true;
int sudoku[9][9], sum=0;
//vector<int>total;
set<int>a;
set<int>b;
set<int>c;
set<int>d;
set<int>e;
for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
  cin>>sudoku[i][j];
}
}//for anidado

for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
 // sum=+sudoku[i][j];
  a.insert(sudoku[i][j]);
}
// total.push_back(sum);
 sum=0;
}//for anidado

 for(int j=0; j<9; j++){
    for(int i=0; i<9; i++){
 // sum+=sudoku[i][j];
  b.insert(sudoku[i][j]);
}
// total.push_back(sum);
 sum=0;
}//for anidado


for(int i=0; i<3; i++){
   for(int j=0; j<3; j++){
 // sum+=sudoku[i][j];
   c.insert(sudoku[i][j]);
}
}//for anidado
 // total.push_back(sum);
 sum=0;


 for(int i=3; i<6; i++){
   for(int j=3; j<6; j++){
  //sum+=sudoku[i][j];
   d.insert(sudoku[i][j]);
}
}//for anidado
 // total.push_back(sum);
 //sum=0;

   for(int i=6; i<9; i++){
   for(int j=6; j<9; j++){
 // sum+=sudoku[i][j];
   e.insert(sudoku[i][j]);
}
}//for anidado
 // total.push_back(sum);
 sum=0;

   /*for(int i=0; i<total.size(); i++){
    if(total[i]!=45){
     f=false;
    }
   }*/

   if(a.size()!=9 && b.size()!=9 && c.size()!=9 && d.size()!=9 && e.size()!=9){
    f=false;
   }

  /* cout<<"VECTOR : "<<endl;
   for(int i=0; i<total.size(); i++){
    cout<<total[i]<<" , ";
   }

   cout<<"SET SIZES: "<<endl;
   cout<<a.size()<<" "<<b.size()<<" "<<c.size()<<" "<<d.size()<<" "<<e.size()<<endl;*/

 cout<<"Instancia "<<(sorner+1)<<"\n";

  if(f){
    cout<<"SIM\n";
  }else{
   cout<<"NAO\n";
  }
  cout<<"\n";
    sorner++;
}//while
return 0;
}
