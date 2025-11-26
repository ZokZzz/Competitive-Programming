#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
unsigned int n;
cin>>n;
if(n%2==0){
 cout<<((n>>1)-1)<<"\n";
} else{
cout<<(n>>1)<<"\n";
}//if

}//while
return 0;
}



