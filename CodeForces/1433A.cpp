#include<bits/stdc++.h>
using namespace std;

int sorner (int a){
switch(a){
case 1:{
return 1;
break;
}

case 2:{
return 3;
break;
}

case 3:{
return 6;
break;
}

case 4:{
return 10;
break;
}


}//switch


}



int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
 int n=0;
 cin>>n;
  string number = to_string(n);
  int b = ((number[0]-'0')-1)*10;
  int c = sorner(number.size());
 cout<<(b+c)<<"\n";
}
return 0;
}
