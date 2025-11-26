#include<bits/stdc++.h>
using namespace std;
int main(){
unsigned int n;
while(cin>>n){
for(int i=1; i<=n; i+=2){
int espacios =(n - i)/2;

for(int j = 0; j<espacios; ++j){
cout << ' ';
}//for j

int c = i;
while(c--){
cout<<'*';
}//while
cout<<"\n";



}//for



for(int i=1; i<=3; i+=2){
int espacios =(n - i)/2;

for(int j = 0; j<espacios; ++j){
cout << ' ';
}//for j

int c = i;
while(c--){
cout<<'*';
}//while
cout<<"\n";


}//for

cout<<"\n";

}//while
return 0;
}
