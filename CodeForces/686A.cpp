#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
long long int t, p, c=0;
cin>>t>>p;

    for(int i=0; i<t; i++){

    char sign; long long int n;
    cin>>sign;
    cin>>n;


    if(sign == '+'){
    p+=n;
    }else if (p-n>=0){
    p-=n;
    }else{
    c++;
    }

    }//for

    cout<<p<<" "<<c<<"\n";



return 0;
}
