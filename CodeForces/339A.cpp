#include<bits/stdc++.h>
using namespace std;
int main(){
string str="";
cin>>str;
int uno=0, dos=0, tres=0, mas=0;

for(int i=0; i<str.size(); i++){
 if(str[i]=='1'){
    uno++;
 }
  if(str[i]=='2'){
    dos++;
 }

  if(str[i]=='3'){
    tres++;
 }

    if(str[i]=='+'){
    mas++;
 }


}

while(uno--){
    cout<<"1";
    if(str.size()>1 && mas!=0){
    cout<<"+";
    mas--;
    }
}

while(dos--){
    cout<<"2";
    if(str.size()>1 && mas!=0){
    cout<<"+";
    mas--;
    }
}

while(tres--){
    cout<<"3";
    if(str.size()>1 && mas!=0){
    cout<<"+";
    mas--;
    }
}



cout<<"\n";

}
