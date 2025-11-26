#include<bits/stdc++.h>
using namespace std;
int main(){

char codeforces[] = {'c', 'o', 'd', 'e', 'f', 'r', 's'};

int testcases=0;
cin>>testcases;
while(testcases--){
char morcilla;
bool f=false;
cin>>morcilla;
for(int i=0; i<7; i++){
if(morcilla==codeforces[i]){
 f=true;
 break;
}//if
}//for

if(f){
    cout<<"YES\n";
}else{
  cout<<"NO\n";
}



}//while




return 0;
}
