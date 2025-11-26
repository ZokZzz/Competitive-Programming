#include<bits/stdc++.h>
using namespace std;
 int main(){

 string str;
 cin>>str;
 bool h=false, e=false, l1=false, l2=false, o=false;
 int c=0;
 for(int i=0; i<str.size(); i++){
   if(str[i]=='h'){
    h=true;
    c=i;
    break;
   }

 }//for
  if(h){
  for(int i=c+1; i<str.size(); i++){
   if(str[i]=='e'){
    e=true;
    c=i;
    break;
   }

 }//for
 }//if


  if(e){
  for(int i=c+1; i<str.size(); i++){
   if(str[i]=='l'){
    l1=true;
    c=i;
    break;
   }

 }//for
  }//if

  if(l1){
  for(int i=c+1; i<str.size(); i++){
   if(str[i]=='l'){
    l2=true;
    c=i;
    break;
   }

 }//for
 }//if

  if(l2){
  for(int i=c+1; i<str.size(); i++){
   if(str[i]=='o'){
    o=true;
    c=i;
    break;
   }

 }//for
 }//if

 if(h && e && l1 && l2 && o){
cout<<"YES\n";
 } else{
  cout<<"NO\n";
 }


 return 0;
 }
