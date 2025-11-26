#include<bits/stdc++.h>

using namespace std;

int main (){

int c1=0, c2=0, cd1=0, cd2=0;

float v1=0, v2=0, t=0;

cin>>c1;

cin>>cd1;

cin>>v1;

cin>>c2;

cin>>cd2;

cin>>v2;

t=((v1*cd1)+(v2*cd2));

cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<t<<"\n";

return 0;
}
