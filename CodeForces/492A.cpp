#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n, h=0, current=0;
cin>>n;
while(current<=n){
    h++;
    current+=(h*(h+1))/2;
}//while
cout<<(h-1)<<"\n";
return 0;
}

