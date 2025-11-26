#include<bits/stdc++.h>
using namespace std;
int main(){
int n, mi = 100000000, x, y;
cin>>n;

vector<int>a(n+1);

for(int i=0; i<n; i++){
    cin>>a[i];
}//for


for(int i=0; i<n-1; i++){
if(abs(a[i+1]-a[i])<mi){
    mi = abs(a[i+1]-a[i]);
    x = i+1;
    y= i+2;
}//if

}//for


if(abs(a[n-1]-a[0])<mi){
   x = 1;
   y = n;
}//if

cout<<x<<" "<<y<<"\n";

return 0;
}
