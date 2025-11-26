#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
while(b!=0){
int temp = b;
b=a%b;
a=temp;
}
return a;
}

int gcdtres(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int main(){

int x, y, z, a, b, c;
bool pitagoras=false, primi=false;
while(cin>>x>>y>>z){

if(x>y && x>z){

if(x*x == y*y + z*z){
pitagoras = true;
}

if(gcdtres(x,y,z)==1 && pitagoras==true){
primi =true;
}


} else if(y>x && y>z){

if(y*y == x*x + z*z){
pitagoras = true;
}

if(gcdtres(x,y,z)==1 && pitagoras==true){
primi =true;
}


} else if(z>x && z>y){

if(z*z == x*x + y*y){
pitagoras = true;
}

if(gcdtres(x,y,z)==1 && pitagoras==true){
primi =true;
}

}//if


cout<<"tripla";
if(pitagoras){cout<<" pitagorica";}
if(primi){cout<<" primitiva";}
cout<<"\n";

pitagoras=false; primi=false;


}//while






return 0;
}
