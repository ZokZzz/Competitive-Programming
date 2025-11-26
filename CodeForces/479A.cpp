#include<bits/stdc++.h>
using namespace std;
 int main(){
 int a,b,c;
 cin>>a>>b>>c;
 int solve = a+b+c;
 solve = max(solve, (a + b) * c);
 solve = max(solve, a * (b + c));
 solve = max(solve, a * b * c);

 cout<<solve<<"\n";

 return 0;
 }
