#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
 int n=0;
 vector<int>numbers;
 cin>>n;
 string str = to_string(n);
reverse(str.begin(), str.end());
for(int i=0; i<str.size(); i++){
  if(str[i]=='0'){
    continue;
  }else{
  int aux = str[i] - '0';
  if(i==0){
  aux = (aux  * (i+1));
  } else{
   aux = (aux * pow(10,i));
  }
  numbers.push_back(aux);
  }//if
}//

cout<<numbers.size()<<"\n";
for(int i=0; i<numbers.size(); i++){
cout<<numbers[i];
if(i==numbers.size()-1){
 cout<<"\n";
}else{
cout<<" ";
}
}//for

}//while
return 0;
}
