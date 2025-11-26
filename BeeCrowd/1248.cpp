#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int n;
cin>>n;
cin.ignore();
for(int sorner=0; sorner<n; sorner++){
string dieta, c1, c2;
getline(cin, dieta); getline(cin, c1); getline(cin, c2);
if(dieta.empty()){
cout<<"\n";
continue;
}

if(dieta.empty() && c1.empty() && c2.empty()){
cout<<"\n";
continue;
}


if(c1.empty() && c2.empty()){
sort(dieta.begin(), dieta.end());
cout<<dieta<<"\n";
continue;
}


string c = c1+c2;
set<char>d;
set<char>co;
for(int i=0; i<c.size(); i++){
  co.insert(c[i]);
}//for

if(c.size()!=co.size()){
cout<<"CHEATER\n";
continue;
}//if

for(int i=0; i<dieta.size(); i++){
  d.insert(dieta[i]);
}//for

vector<char>di;
di.reserve(d.size());
copy(d.begin(), d.end(), back_inserter(di));



for(int i=0; i<c.size(); i++){
   di.erase(remove(di.begin(), di.end(), c[i]), di.end());
}//for

bool f=true;

for(char x : c){
if(find(dieta.begin(), dieta.end(), x) == dieta.end()){
f=false;
break;
}//if
}//for


if(f){
for(int i=0; i<di.size(); i++){
cout<<di[i];
}//for
cout<<"\n";
}else{
cout<<"CHEATER\n";
}//if
}//for

return 0;
}
