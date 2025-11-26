#include<bits/stdc++.h>
using namespace std;
int main(){
long int k, l, m, n, d;
cin>>k>>l>>m>>n>>d;
if(k>d && l>d && m>d && n>d){
cout<<0<<"\n";
return 0;
}
int c=d;
for(int i=0; i<d; i++){

 if((i%k!=0) && (i%l!=0) && (i%m !=0) && (i%n !=0)){
    c--;
 }//if

}//for

cout<<c<<"\n";

return 0;
}
