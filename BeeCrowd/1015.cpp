#include<bits/stdc++.h>
using namespace std;
int main(){
double x1=0, x2=0, y1=0, y2=0, d=0;
cin>>x1>>y1>>x2>>y2;
d=(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
cout<<fixed<<setprecision(4)<<d<<"\n";
return 0;
}
