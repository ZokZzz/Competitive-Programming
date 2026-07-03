#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define sz(a) ((int)a.size())
#define full(x, y) memset(x, y, sizeof(x))


void tc(){

    string s;
    getline(cin, s);

    queue<string> q;

    string n = "";

    for(int i = 0; i < s.size(); i++){

        if(isdigit(s[i]) && s[i] != ' ') {

            n.pb(s[i]);
            continue;

        }

        if(s[i] == ' '){

            if(!n.empty()){


                q.push(n);
                n = "";

              }

        }

        if(s[i] == '.'){

              if(!n.empty()){


                q.push(n);
                n = "";

              }

              i += 2;
              q.push(" ...");


        }

        if(s[i] == ','){

            if(!n.empty()){


                q.push(n);
                n = "";

            }

            q.push(", ");




        }


    }

    if(!n.empty()) q.push(n);

    int c = 1, siz = q.size();

    string ans;

    while(!q.empty()){

        if(q.front() == ", "){


            if(c == siz){

                ans += ",";

            } else {

            ans += q.front();

            }

            q.pop();



        } else if(q.front() == " ..."){

            if(c == 1 || ans[ans.size() - 2] == ','){

                ans += "...";

            } else {

                ans += q.front();

            }

            q.pop();

        } else if(isdigit(q.front().back())) {

                if(isdigit(ans.back())) {ans += ' ';}

                else if(c != 1 && ans[ans.size() - 2] != ',' && ans[ans.size() - 2] != '.')  ans += ' ';

                ans += q.front();

                q.pop();
        }

        c++;

    }

    while(ans.back() == ' ') ans.pop_back();

    cout << ans << "\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t-->0){
        tc();
    }
}


