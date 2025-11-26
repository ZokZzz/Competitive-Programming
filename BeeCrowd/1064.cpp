#include<bits/stdc++.h>
using namespace std;
int main(){
int c=0;
double prom;
for(int i=1; i<=6; i++){
double aux;
cin>>aux;
if(aux>0){
    c++;
    prom+=aux;
}//if
}//for
cout<<c<<" valores positivos\n";
cout<<fixed<<setprecision(1)<<(prom/c)<<"\n";
return 0;
}
