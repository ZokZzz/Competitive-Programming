#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(7);
    for(int i=0; i<7; i++){
        cin>>a[i];
    }//for

    int idx = 0;
    while(true){
        n-=a[idx];
        if(n<=0) break;
        idx = (idx+1) % 7;
    }//while

    cout<<idx+1<<"\n";

    return 0;
}
