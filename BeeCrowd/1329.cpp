#include<bits/stdc++.h>
using namespace std;
int main(){
long int n=1;
while(cin>>n){
  if(n==0){return 0;}
 long int m=0, j=0;
 bool a[n];
 for(int i=0; i<n; i++){
cin>>a[i];
 if(a[i]==true){
j++;
 } else{
  m++;
 }

 }//for

cout<<"Mary won "<<m<<" times and John won "<<j<<" times\n";


}//while
}
