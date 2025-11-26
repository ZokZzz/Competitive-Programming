#include<bits/stdc++.h>
using namespace std;
int main(){

int n=0;
cin>>n;
int x=n;
int r=0;
while(x--){
int c=0;
int a[3];
for(int i=0; i<3; i++){
   cin>>a[i];

}

for(int i=0; i<3; i++){
  if(a[i]==1){

    c++;

  }

}



if(c>=2){
    r++;
}


if(x==0){
cout<<r<<"\n";
return 0;
}

}



return 0;
}
