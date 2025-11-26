#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int a[n], uno, dos, tres, c=0;
vector<int>unos;
vector<int>doses;
vector<int>treses;
uno=dos=tres=0;
for(int i=0; i<n; i++){
cin>>a[i];
}//for

for(int i=0; i<n; i++){
if(a[i]==1){
 uno++;
 unos.push_back(i+1);
}//if

if(a[i]==2){
dos++;
doses.push_back(i+1);
}//if

if(a[i]==3){
 tres++;
  treses.push_back(i+1);
}//if
}//for

while(uno && dos && tres){
uno--;
dos--;
tres--;
c++;
}//while

if(c==0){
cout<<0<<"\n";
}else{
cout<<c<<"\n";
for(int i=0; i<c; i++){
 cout<<unos[i]<<" "<<doses[i]<<" "<<treses[i]<<"\n";
}//for
}//if


return 0;
}



