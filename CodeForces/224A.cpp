#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int s1, s2, s3;
    cin>>s1>>s2>>s3;
    int a = sqrt((s1*s3)/s2), b = sqrt((s1*s2)/s3), c = sqrt((s2*s3)/s1);
    cout<<4*(a+b+c)<<"\n";
    return 0;
}

