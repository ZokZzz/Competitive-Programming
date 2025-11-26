#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t-->0){

     int n = 1;
     cin >> n;

     string s;
     cin >> s;

     multiset<char>x;

     for(int i = 0; i < s.size(); i++){
           x.insert(s[i]);
     }//for


     int a = x.count('a'), b = x.count('b');


     for(int i = 0; i < s.size(); i++){




           if(s[i] == 'a') a--;
           else b--;
     }//for






    }//while




    return 0;
}



