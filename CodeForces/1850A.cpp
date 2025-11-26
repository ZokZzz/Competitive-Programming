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

if(a[0]+a[1]>=10 || a[1]+a[2]>=10 || a[0]+a[2]>=10){
cout<<"YES\n";
}else{
cout<<"NO\n";
}

}//while
return 0;
}




