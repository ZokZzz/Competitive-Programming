#include<bits/stdc++.h>
using namespace std;
#define lli long long int

constexpr long long Max = 100000;

lli bsnueva(const vector<lli>& A, lli i, lli j, lli k) {
    lli result = -1;
    while (i <= j) {
        lli m = (i + j) / 2;
        if (A[m] == k) {
            result = m;
            j = m - 1;
        } else if (k > A[m]) {
            i = m + 1;
        } else {
            j = m - 1;
        }
    }
    if (result == -1) {
        result = -1 * i - 1;
    }
    return result;
}



int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
lli tt;
cin>>tt;
 vector<lli> rperfect(Max);
for(lli i=0; i<Max; i++){
rperfect[i]=i*i;
}//for

while(tt--){
lli n=0 ,sum=0;
cin>>n;
vector<lli> a(n);
for(lli i = 0; i < n; i++) {
cin>>a[i];
sum+=a[i];
}//for
lli k = bsnueva(rperfect, 0, Max - 1, sum);
if(k>=0){
cout<<"YES\n";
}else{
cout<<"NO\n";
}


}//while


return 0;
}

