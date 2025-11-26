#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    int t = 1;
    cin>>t;

    while(t-->0){

        int n = 1;
        cin>>n;

        string s = " ";
        cin>>s;

        pair<int, int> pos = {0, 0};

        bool f = false;

        for(int i = 0; i < s.size(); i++){

            char mov = s[i];

            switch(mov){


                case 'U' : {

                    pos.second ++;
                    break;

                }//case


                case 'D' : {

                   pos.second --;
                   break;

                }//case


                case 'L' : {

                    pos.first --;
                    break;

                }//case

                case 'R' : {

                     pos.first ++;
                     break;

                }//case



            }//switch


            if(pos.first == 1 && pos.second == 1){

                f = true;

            }//if



        }//for


        if(f){

            cout << "YES\n";

        } else {

            cout << "NO\n";

        }//if


    }//while


    return 0;
}
