#include<bits/stdc++.h>
using namespace std;
int main(){
int testcases=0;
cin>>testcases;
while(testcases--){
int rating=0, x=0;
cin>>rating;

if(rating>=1900){
x=1;
}

if(rating>=1600 && rating<=1899){
x=2;
}

if(rating>=1400 && rating<=1599){
x=3;
}


if(rating<=1399){
x=4;
}

 cout<<"Division "<<x<<"\n";
}
return 0;
}
