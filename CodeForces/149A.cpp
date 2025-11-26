#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int k, s=0;
    cin>>k;
    vector<int>a(12);
    for(int i=0; i<12; i++){
        cin>>a[i];
        s+=a[i];
    }


    if(k>s){
        cout<<-1<<"\n";
        return 0;
    }


    if(k==0){
        cout<<0<<"\n";
        return 0;
    }





    int c=0;

    sort(a.rbegin(), a.rend());

     for(int i=0; i<12; i++){
            if(k<=0){
                break;
            }

            k-=a[i];
            c++;
    }

    cout<<c<<"\n";


    return 0;
}
