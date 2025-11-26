#include<bits/stdc++.h>
using namespace std;
int main(){
int x, y, sum=0;
cin>>x>>y;
set<int>a;
a.insert(x); a.insert(y);
for(int i=*a.begin(); i<=*a.rbegin(); i++){
  if(i%13!=0){
    sum+=i;
  }//if

}//for


cout<<sum<<"\n";


return 0;
}
