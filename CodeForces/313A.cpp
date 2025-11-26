#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<"\n";
    }else{
    n = n*-1;
    string s = to_string(n);
    vector<int>num;
    string a = s;
    a.pop_back();
    int aux = stoi(a);
    num.pb(aux);
    s.erase(s.size()>2? s.size()-2 : 0, 1);
    int aux2 = stoi(s);
    num.pb(aux2);
    sort(num.begin(), num.end());
    cout<<(num[0] * -1)<<"\n";
    }//if
    return 0;
}

