#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n=0, resultado=0;
cin>>n;
if(n%2==0){
 cout<<n/2<<"\n";
 return 0;
} else{
resultado=floor(-1*(n/2))-1;
cout<<resultado<<"\n";
 return 0;
}//if

}
