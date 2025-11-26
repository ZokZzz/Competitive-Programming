#include<bits/stdc++.h>
using namespace std;
int main(){
int a, b, c, d;
cin>>a>>b>>c>>d;
if(b*c<=d){
cout<<(a*c)<<"\n";
}else{
cout<<((a/b)*d+min((a%b)*c,d))<<"\n";
}
return 0;
}
