#include<bits/stdc++.h>
using namespace std;
int main(){
int s;
cin>>s;
string aux = ":";
int m = s/60;
s = s-(60*m);
int h = m/60;
m = m-(60*h);
cout<<h<<aux<<m<<aux<<s<<"\n";
return 0;
}
