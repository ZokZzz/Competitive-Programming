#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0, a=0, b=0, c=0, maxcap=0;
cin>>n;
while(n--){
cin>>a>>b;
c = c-a;
c = c+b;
if(c>maxcap){
maxcap=c;
}

}
cout<<maxcap<<"\n";
return 0;
}
