#include<bits/stdc++.h>

 using namespace std;

 int main(){

 int a, b, c;

 cin>>a;

 cin>>b;

 cin>>c;


int abs1 = abs(a-b);


int f = ((a+b+abs1)/2);

if(f>c){

   cout<<f<<" eh o maior\n";


} else {

  cout<<c<<" eh o maior\n";

}




 return 0;
 }
