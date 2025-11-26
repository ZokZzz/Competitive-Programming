#include<bits/stdc++.h>
using namespace std;
int main(){
int a=0, b=0, c=0, d=0;
cin>>a>>b;

while(a!=0 && b!=0){
a--;
b--;
c++;

}

if(a==0){
while(b>=2){
b-=2;
d++;
}

} else{
    while(a>=2){
a-=2;
d++;
}

}


cout<<c<<" "<<d<<"\n";
return 0;
}
