#include<bits/stdc++.h>
using namespace std;

int main(){
int rounds;
while(cin>>rounds && rounds){
int x=0, y=0, og=0, c=0;
for(int i=0; i<rounds; i++){
cin>>x>>y;
if(x>y){
 og++;
}

if(x<y){
 c++;
}

}
cout<<og<<" "<<c<<"\n";

}




}
