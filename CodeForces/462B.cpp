#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, k;
cin>>n>>k;
string s;
cin>>s;

sort(s.begin(), s.end());

vector<ll>frecuencia(26, 0);

for(char c: s){
frecuencia[c-'A']++;
}//for

sort(frecuencia.rbegin(), frecuencia.rend());

ll sum=0;

for(int i=0; i<26; i++){
if(frecuencia[i]<=k){
    sum+=frecuencia[i]*frecuencia[i];
    k-=frecuencia[i];
}else{
    k = k*k;
    break;
    }//if

}//for

cout<<sum+k<<"\n";

return 0;
}

