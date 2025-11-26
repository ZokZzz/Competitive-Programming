#include<bits/stdc++.h>
using namespace std;
int main(){
long int n, sum=0;
cin>>n;
long int gauss = (n*(n+1))/2;
vector<long int>a(n-1, 0);
for(int i=0; i<n-1; i++){
cin>>a[i];
sum+=a[i];
}

cout<<(gauss-sum)<<"\n";


return 0;
}
