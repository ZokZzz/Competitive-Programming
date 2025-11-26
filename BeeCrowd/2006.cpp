#include<bits/stdc++.h>

using namespace std;

int main(){

vector <int> v(5);

int n=0;

int s=0;

int c=0;

cin>>n;

for(int i=0; i<v.size(); i++){

   cin>>s;

   v[i] = s;


}

for(int i=0; i<v.size(); i++){



   if(v[i] == n){

    c++;


   }


}

cout<<c<<"\n";



return 0;
}
