#include<bits/stdc++.h>

using namespace std;

int main(){


unsigned long long n=0, m=0, a=0;
cin>>n>>m>>a;

if(a==1){

    unsigned long long s = n*m;

    cout<<s<<"\n";

return 0;


}



 unsigned long long x = (n/a);

 if(n%a > 0){

    x++;

 }

 unsigned long long y = (m/a);

 if(m%a > 0){

    y++;
 }
 unsigned long long z= x*y;

cout<<z<<"\n";

return 0;


}
