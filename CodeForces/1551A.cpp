
#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t-->0){
int n;
cin>>n;
int c1 = n/3, c2 = c1;
if(n%3==1){
    c1+=1;
} else if(n%3==2){
    c2+=1;
}//if

cout<<c1<<" "<<c2<<"\n";


}//whiles
return 0;
}
