#include<bits/stdc++.h>

using namespace std;


int main(){
int n = 0, a=0, b=0;
cin>>n;
while(n--){
 cin>>a>>b;
 int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }


 cout<<gcd(a,b)<<"\n";



}


return 0;
}
