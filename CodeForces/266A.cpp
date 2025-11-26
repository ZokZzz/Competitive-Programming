#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0, c=0;
cin>>n;
string str;
cin>>str;
for(int i=0; i<n; i++){
if(str[i]==str[i+1]){
c++;
}//if
}//for
cout<<c<<"\n";
return 0;
}
