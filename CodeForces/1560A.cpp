#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int lista[1001];
int j=1;
for(int i=1; i<=1666; i++){
 if(i%3==0 || i%10==3){
    continue;
 }

 lista[j]=i;
 j++;

}//for


int testcases=0;
cin>>testcases;


while(testcases--){
int n=0;
cin>>n;
cout<<lista[n]<<"\n";
}//while
 return 0;
}
