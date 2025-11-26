#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
string n;
cin>>n;
vector<string>numbers;
numbers.push_back(n);
bool f = false;
for(int i=0; i<n.size(); i++){
    char aux2 = n[i];
    int num = aux2-'0';
    if(n[0] == '9' && f == false){f = true; continue;}//if
    if(num > 4 ){
    int aux = n[i]-'0';
    int nn = 9-aux;
    string c = to_string(nn);
    n[i] = c[0];
    numbers.push_back(n);
    }//if
}//for
sort(numbers.begin(), numbers.end());
cout<<numbers[0]<<"\n";

return 0;
}







