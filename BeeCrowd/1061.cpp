#include<bits/stdc++.h>
using namespace std;
int main(){
string diaaux, aux;
int diai=0, diaf=0, hi=0, hf=0, mi=0, mf=0, si=0, sf=0;
cin>>diaaux>>diai;
cin>>hi>>aux>>mi>>aux>>si;
cin>>diaaux>>diaf;
cin>>hf>>aux>>mf>>aux>>sf;

int d=0, h=0, m=0, s=0;

if(sf-si>=0){
 s=sf-si;
} else{
s=(sf-si)+60;
m--;
mi++;
}//if

if(mf-mi>=0){
 m=mf-mi;
} else{
m=(mf-mi)+60;
hi++;
}//if

if(hf-hi>=0){
 h=hf-hi;
} else{
h=(hf-hi)+24;
diai++;
}//if

d=diaf-diai;

cout<<d<<" dia(s)\n";
cout<<h<<" hora(s)\n";
cout<<m<<" minuto(s)\n";
cout<<s<<" segundo(s)\n";


return 0;
}
