#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
int a[3];
for(int i=0; i<3; i++){
cin>>a[i];
}//for

if(a[0]!=a[1] && a[0]!=a[2]){
cout<<a[0]<<"\n";
}

if(a[1]!=a[0] && a[1]!=a[2]){
cout<<a[1]<<"\n";
}

if(a[2]!=a[1] && a[2]!=a[0]){
cout<<a[2]<<"\n";
}


}//while
return 0;
}





