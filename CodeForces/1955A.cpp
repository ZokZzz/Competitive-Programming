#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
    long long n, y1, y2, sum=0;
    cin>>n>>y1>>y2;
   vector<long long>p;
   p.push_back(n*y1);
   if(n%2==0){
   p.push_back((n/2)*y2);
   }else{
   p.push_back(((n-1)/2)*y2+y1);
   }//if

   sort(p.begin(), p.end());

   cout<<p[0]<<"\n";

}//while


return 0;
}
