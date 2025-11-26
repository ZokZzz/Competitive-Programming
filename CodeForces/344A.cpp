#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
string str="";
int c=1;
int s=1;
char comparar;
for(int i=0; i<n; i++){
cin>>str;
if(i!=0){
 if(comparar!=str[0]){
   c++;
 } else{
 s++;
 c=1;
 }


}//if
comparar=str[str.size()-1];

}//for


cout<<s<<"\n";





return 0;
}
