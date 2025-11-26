#include<bits/stdc++.h>
using namespace std;
int main(){
unsigned long long int n=0, x=0, trian=0;
while((cin>>n) && (n!=0)){
x = (-1 + sqrt(1 + 8*(double)n)) /2;
trian = x+1;
if(x%2==0){
x/=2;
}
if(trian%2==0){
trian/=2;
}
if(x*trian == n){
cout<<"YES\n" ;
} else{
cout<<"NO\n";}
}
}
