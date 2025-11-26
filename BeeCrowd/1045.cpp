#include<bits/stdc++.h>

using namespace std;

int main(){

double a=0, b=0, c=0;

double l1=0, l2=0, l3=0;


cin>>a>>b>>c;

l1=a;

l2=b;

l3=c;


if(a>b && a>c && b>=c){

l1=a;

l2=b;

l3=c;



} else if(a>b && a>c && c>=b){

l1=a;

l2=c;

l3=b;



} else if(b>a && b>c && a>=c){

l1=b;

l2=a;

l3=c;



} else if(b>a && b>c && c>=a){

l1=b;

l2=c;

l3=a;



} else if(c>b && c>a && b>=a){

l1=c;

l2=b;

l3=a;



} else if(c>b && c>a && a>=b){

l1=c;

l2=a;

l3=b;



}






if(l1>=(l2+l3) ){

    cout<<"NAO FORMA TRIANGULO\n";

} else{

 if((l1*l1) == ((l2*l2) + (l3*l3))){

cout<<"TRIANGULO RETANGULO\n";

}





 if((l1*l1) > ((l2*l2) + (l3*l3))){

cout<<"TRIANGULO OBTUSANGULO\n";

}






if((l1*l1) < ((l2*l2) + (l3*l3))){

cout<<"TRIANGULO ACUTANGULO\n";

}


 if(l1==l2 && l2==l3 && l1==l3){

cout<<"TRIANGULO EQUILATERO\n";

}




 if(l1==l2 && l1!=l3){

cout<<"TRIANGULO ISOSCELES\n";

}

 if(l1==l3 && l1!=l2){

cout<<"TRIANGULO ISOSCELES\n";

}

 if(l2==l3 && l2!=l1){

cout<<"TRIANGULO ISOSCELES\n";

}

}

return 0;
}
