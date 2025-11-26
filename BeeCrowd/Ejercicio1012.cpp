#include<bits/stdc++.h>

using namespace std;

int main (){

float a, b, c;

double pi = 3.14159;

cin>>a;

cin>>b;

cin>>c;

double art = ((a*c)/2);

double ac = (pi * pow(c,2));

double atr = (((a+b) * c) /2);

double acu = (b * b);

double are = (a * b);

cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<art<<"\n";

cout<<"CIRCULO: "<<fixed<<setprecision(3)<<ac<<"\n";

cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<atr<<"\n";

cout<<"QUADRADO: "<<fixed<<setprecision(3)<<acu<<"\n";

cout<<"RETANGULO: "<<fixed<<setprecision(3)<<are<<"\n";

return 0;
}
