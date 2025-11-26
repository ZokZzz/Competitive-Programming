#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string a, b;
    cin>>a>>b;

    if(a.size() != b.size()){
        cout << "NO\n";
        return 0;
    }//if

    int c = 0;

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){c++;}//if
    }//for

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    if(c==2 && a==b){
        cout<<"YES\n";
    }else{
        cout <<"NO\n";
    }

    return 0;
}
