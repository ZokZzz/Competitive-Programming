#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<"#x: "<<x<<"\n"

int n;

bool bit(int x, int b){
return (x>>b)&1;
}

bool check(int i){
int counter = 0, counter2 = 0;
for(int b=0; b<n/2; b++){

   if(bit(i, b)) counter++;

}//for

for(int b=n/2; b<n; b++){

   if(bit(i, b)) counter2++;

}//for


return (counter == counter2);


}

void show(int i){

for(int j=(n-1); j>=0; j--){
  if(bit(i, j)) cout<<1;
    else cout<<0;
    }//for
    cout<<"\n";
}



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
cin>>n;
n*=2;

for(int i=0; i<(1<<n); i++){
      if(check(i)) show(i);
}//for



}//while
return 0;
}

