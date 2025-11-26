#include<bits/stdc++.h>
using namespace std;
int main(){
int n, m, c=0;
cin>>n>>m;

for(int a=0; a<=1000; a++){
    for(int b=0; b<=1000; b++){
       if(a*a + b == n && a + b*b == m){
        c++;
       }//if
    }//for
}//for anidado

cout<<c<<"\n";

return 0;
}
