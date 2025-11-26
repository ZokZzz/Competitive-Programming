#include<bits/stdc++.h>
using namespace std;
int main(){
int amigos, botellas, mililitros, limones, rebanadas, sal, milnecesarios, salnecesaria;
cin>>amigos>>botellas>>mililitros>>limones>>rebanadas>>sal>>milnecesarios>>salnecesaria;

int toast = (botellas*mililitros)/(milnecesarios);
int limonnecesario = limones*rebanadas;
salnecesaria = sal/salnecesaria;
int necesario = min(toast, limonnecesario);
int solve = min(necesario, salnecesaria)/amigos;
cout<<solve<<"\n";

return 0;
}
