#include<bits/stdc++.h>
using namespace std;
#define ll  unsigned long long int
#define pb push_back
#define debug(x) cout<<"x: "<<x<<"\n"


struct bola{
int x, y;
};



void solve(){
int n=1, k=1;
cin>>n>>k;
vector<bola>a(n);
for(int i=0; i<n; i++){
    cin>>a[i].x>>a[i].y;
}//for

bool f = true, can=false;


for(int i=0; i<n; i++){
   for(int j=0; j<n; j++){

        int aux = (abs(a[j].x - a[i].x)+abs(a[j].y - a[i].y));
        //cout<<"Aux: "<<aux<<"\n";
        if(aux>k){break;}//if
        if(j==n-1){can = true;}//if
        if(i==j)continue;

     }//for

    if(can){break;}//if

}//for


if(can){
    cout<<1<<"\n";
}else{
   cout<<-1<<"\n";
}//if



}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
   solve();
}//while
return 0;
}
