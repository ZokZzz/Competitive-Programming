#include<bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

    fast


bool f=true;

string str;
while(getline(cin,str)){

vector <char> v;
vector <char> p;



for(int i =0; i<str.size(); i++){

        if(str[i] == '(' ){

            v.push_back(str[i]);
            p.push_back(str[i]);

        }

        if(str[i] == ')' ){

            v.push_back(str[i]);

        }


}

if(v.size() %2 != 0){

    f=false;


}





if(v[0] == ')'){

    f=false;


}



for(int i =0; i<v.size(); i++){

      if(v[i] == ')'){

        p.pop_back();

      }

}

if(!p.empty()){

     f=false;


}



if(f){

    cout<<"correct\n";



} else{

 cout<<"incorrect\n";


}






}

return 0;



}
