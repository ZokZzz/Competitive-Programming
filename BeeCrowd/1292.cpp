#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
const double sorner = 0.00000010670, morcilla = 0.00000010;
double n;
while(cin>>n){
 double s = (n*sorner)/morcilla;
 if(n==morcilla){
    cout<<fixed<<setprecision(10)<<s<<"\n";
 }else{
   s = s+0.0000000001;
 cout<<fixed<<setprecision(10)<<s<<"\n";
 }
}//while
return 0;
}
