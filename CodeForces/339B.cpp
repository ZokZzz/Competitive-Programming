#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long long int houses, works;
cin>>houses>>works;
long long int hw[works];
for(int i=0; i<works; i++){
cin>>hw[i];
}//for
long long int c = hw[0]-1;
for(int i=0; i<works-1; i++){
if(hw[i+1]>hw[i]){
     c+=(hw[i+1]-hw[i]);
}//if

if(hw[i+1]<hw[i]){
c+=(houses-hw[i])+hw[i+1];
}//if


}//for

cout<<c<<"\n";

return 0;
}
