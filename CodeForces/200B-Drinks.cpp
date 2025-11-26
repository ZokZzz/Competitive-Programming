#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
double a[n];
for(int i=0; i<n; i++){
  cin>>a[i];
}
double t=0;
for(int i=0; i<n; i++){
t+=a[i];}

double ans = double(t/n);

cout<<ans<<"\n";


}

