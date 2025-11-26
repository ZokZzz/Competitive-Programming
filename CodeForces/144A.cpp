#include <bits/stdc++.h>
using namespace std;

int main(){
int n, im=100000, iM=0, pm, pM;
cin>>n;
vector<int>a(n,0);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for

for(int i=0; i<n; i++){
    if(a[i]>iM){
        iM = a[i];
        pM = i;
    }//if

     if(a[i]<=im){
        im = a[i];
        pm = i;
    }//if

}//for


if(im==a[n-1] && iM == a[0]){
    cout<<0<<"\n";
} else if(pm>pM){
    cout<<((pM)+((n-1)-pm))<<"\n";
}else{
    cout<<(((pM)+((n-1)-pm))-1)<<"\n";
}//if



return 0;
}
