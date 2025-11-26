#include<bits/stdc++.h>

using namespace std;

int main(){
int n = 0, c=0;
string str = "";
cin>>n;
while(n--){
cin>>str;

for(int i = 0; i<str.size(); i++){


    if(str[i] == '+'){

        c = c+1;
        break;

    } else  if(str[i] == '-'){

    c = c-1;
    break;

    }


}


if(n==0){

   cout<<c<<"\n";
   return 0;
}


}



}
