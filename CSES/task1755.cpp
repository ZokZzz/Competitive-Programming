#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string s = " ";
    cin >> s;

    unordered_map<char, long long> frecuency;

    for(int i = 0; i < s.size(); i++){

        frecuency[s[i]]++;


    }//for

    long long c = 0;


    for(auto x : frecuency){

        if(x.second % 2 != 0)c++;

    }//for


    if(c > 1) {

        cout << "NO SOLUTION\n";
        return 0;

    }//if

    string mid;


    for(auto x : frecuency){

        if(x.second % 2 != 0) {

        for(int i = 0; i < x.second; i++) mid.pb(x.first);


        }//if

    }//for

    string left, right;


    for(auto x : frecuency){

        if(x.second % 2 == 0) {
            string a(1, x.first);

            for(int i = 0; i < x.second / 2; i++) left.pb(x.first);

            for(int i = 0; i < x.second / 2; i++) right.pb(x.first);


        }//if

    }//for


    reverse(right.begin(), right.end());


    cout << left << mid << right << "\n";

    return 0;
}

