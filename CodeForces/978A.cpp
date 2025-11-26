#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    unordered_set<int> gg;

    int n;
    cin>>n;

    vector<int>a(n), answer;

    set<int>aux;


    for(int i=0; i<n; i++) cin>>a[i];


    for(int i = n-1; i>=0; i--){

    auto it = aux.find(a[i]);

    if(it != aux.end()){

     continue;

    } else {

    aux.insert(a[i]);
    answer.pb(a[i]);

    }//if


    }//for

    cout << answer.size() << "\n";

    for(int i = answer.size()-1; i>=0; i--){

        cout << answer[i] << (i == 0? "\n" : " ");

    }//for

    return 0;
}
