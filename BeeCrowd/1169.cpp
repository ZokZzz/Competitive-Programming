#include<bits/stdc++.h>

#define lli unsigned long long int

using namespace std;

int main(){
const lli conSorner = 12, kg=1000;
lli a[64];
a[0]=1;
for(lli i=1; i<64; i++){
a[i]=a[i-1]*2;
}

lli sorner=0, wheat=0;
int tt;
cin>>tt;
while(tt--){
 int x=0;
 cin>>x;
 for(int i=0; i<x; i++){
  wheat+=a[i];
 }

 sorner = wheat/conSorner;

 cout<<(sorner/kg)<<" kg\n";

 wheat=sorner=0;

}


return 0;
}
