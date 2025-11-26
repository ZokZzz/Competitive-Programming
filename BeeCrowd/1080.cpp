#include<bits/stdc++.h>
using namespace std;
int main(){
int mayor=0, index;
for(int i=1; i<=100; i++){
    int a;
    cin>>a;
    if(a>mayor){
        mayor=a;
        index=i;
    }//if
}//while

cout<<mayor<<"\n";
cout<<index<<"\n";


return 0;
}

