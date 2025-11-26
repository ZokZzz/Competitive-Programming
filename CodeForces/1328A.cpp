#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n=0;
cin>>n;
while(n--){
unsigned long long int a, b, c=0;
 cin>>a>>b;
if(a%b==0){
cout<<0<<"\n";
}else{
cout<<(b-a%b)<<"\n";
}//if
}//while
return 0;
}
