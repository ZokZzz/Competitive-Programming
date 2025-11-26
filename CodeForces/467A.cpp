#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
int p=0, q=0;
int c=0;
while(n--){
cin>>p>>q;
int a=q-p;
if(a>=2){
c++;
}

}
cout<<c<<"\n";
return 0;
}
