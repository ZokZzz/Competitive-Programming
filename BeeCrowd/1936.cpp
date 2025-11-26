#include<bits/stdc++.h>

using namespace std;

const int MAX = 100000000;

struct factorial{
int uno;
int dos;
int tres;
int cuatro;
int cinco;
int seis;
int siete;
int ocho;
} factoriales;

int main(){

unsigned int n;
cin>>n;
factoriales.uno=1;
factoriales.dos=2;
factoriales.tres = 6;
factoriales.cuatro = 24;
factoriales.cinco = 120;
factoriales.seis = 720;
factoriales.siete = 5040;
factoriales.ocho = 40320;
int c=0;
while(n){
 if (n>=factoriales.ocho){
 	n = n-factoriales.ocho;
 	c++;
 } else	if (n>=factoriales.siete){
 	n = n-factoriales.siete;
 	c++;
 } else	if (n>=factoriales.seis){
 	n = n-factoriales.seis;
 	c++;
 } else if (n>=factoriales.cinco){
 	n = n-factoriales.cinco;
 	c++;
 }else if (n>=factoriales.cuatro){
 	n = n-factoriales.cuatro;
 	c++;
 } else if (n>=factoriales.tres){
 	n = n-factoriales.tres;
 	c++;
 } else if (n>=factoriales.dos){
 	n = n-factoriales.dos;
 	c++;
 } else	 if (n>=factoriales.uno){
 	n = n-factoriales.uno;
 	c++;
 }//if


}//while

cout<<c<<"\n";

	return 0;
}
