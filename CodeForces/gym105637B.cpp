#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int cars = 1, distance = 1;
    cin>>cars>>distance;


    vector<double>carss;


    for(int i=0; i<cars; i++){
        double d, v;
        cin>>d>>v;
        double aux = (distance-d)/v;
        carss.push_back(aux);
    }//for



    int index;
    double m = 1000000000;

    for(int i=0; i<carss.size(); i++){
        if(carss[i]<m){
            m = carss[i];
            index = i+1;
        }//if
    }//for



    cout<<index<<"\n";


    return 0;
}
