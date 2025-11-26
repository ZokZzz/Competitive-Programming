#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

int c=0;

for(int i=1; i<=n; i++){
  if(n%i==0){
    c++;
  }//if
}//for

if(c>2){
return false;
}else{
return true;
}//if

}


int main(){
int n;
while(cin>>n){

vector<int>a(n);

for(int i=n-1; i>=0; i--){
   cin>>a[i];
}//for

int m=0, sum=0;
cin>>m;

for(int i=0; i<n; i+=m){
   sum+=a[i];
}// for

if(isPrime(sum)){
   cout<<"You’re a coastal aircraft, Robbie, a large silver aircraft."<<"\n";
}else{
   cout<<"Bad boy! I’ll hit you."<<"\n";
}//if

}//while
return 0;
}
