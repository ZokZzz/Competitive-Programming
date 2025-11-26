#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0, c=0, res=0;
cin>>n;
int a[n];
for(int i=0; i<n; i++){
cin>>a[i];
}//

for(int i=0; i<n; i++){
if(a[i]<0){
    if(res>0){
     res--;
    }else{
    c++;
    }
}//if

if(a[i]>0){
    res+=a[i];
    if(a[i+1]<0){
    res--;
    i++;

}//if


}//if



}//for



cout<<c<<"\n";




return 0;
}
