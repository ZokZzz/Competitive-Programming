#include<bits/stdc++.h>
using namespace std;
int main(){
int fibo[46], n;
fibo[0]=0, fibo[1]=1;
for(int i=2; i<46; i++){
    fibo[i] = fibo[i-1]+fibo[i-2];
}//for
cin>>n;
for(int i=0; i<n; i++){
    cout<<fibo[i];
    if(i==n-1){
        cout<<"\n";
    }else{
     cout<<" ";
    }//if
}//for

return 0;
}
