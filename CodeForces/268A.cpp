#include<bits/stdc++.h>
using namespace std;
int main(){

int n=0, c=0;
cin>>n;

int host[n];
int guest[n];

for(int i=0; i<n; i++){
cin>>host[i];
cin>>guest[i];
}


for(int i=0; i<n; i++){

for(int j=0; j<n; j++){

    if(host[i]==guest[j]){
    c++;
    }

}


}



cout<<c<<"\n";



return 0;
}
