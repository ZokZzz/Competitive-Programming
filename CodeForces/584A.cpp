#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int dig=0, div=0;
cin>>dig>>div;

if(dig==1 && div == 10){
    cout<<-1<<"\n";
    return 0;
}//if

if(div==10){
for(int i=1; i<=dig-1; i++){
    cout<<1;
}//for
cout<<0;
cout<<"\n";

return 0;

}//if

for(int i=1; i<=dig; i++){
    cout<<div;
}//for
cout<<"\n";

return 0;
}
