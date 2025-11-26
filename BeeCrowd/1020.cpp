#include<bits/stdc++.h>
using namespace std;
int main(){
int n, m=0, a=0;
cin>>n;
while(n>=365){
    n-=365;
    a++;
}//while

while(n>=30){
    n-=30;
    m++;
}//while

cout<<a<<" ano(s)\n";
cout<<m<<" mes(es)\n";
cout<<n<<" dia(s)\n";


return 0;
}
