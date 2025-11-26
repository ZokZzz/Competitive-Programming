#include<bits/stdc++.h>

using namespace std;

int main(){

int n, p = 0;

cin>>n;

string v = "";

while(n--){

  cin>>v;


  for(int i = 0; i<v.size(); i++){

  switch(v[i]){

   case '0' : {

  p = p +6;

  break;

  }

  case '1' : {

  p = p +2;

   break;
  }

   case '2' : {

  p = p +5;
 break;
  }

   case '3' : {

  p = p +5;
 break;
  }

   case '4' : {

  p = p +4;
 break;
  }

   case '5' : {

  p = p +5;
 break;
  }

   case '6' : {

  p = p +6;
 break;
  }

   case '7' : {

  p = p +3;
 break;
  }

   case '8' : {

  p = p +7;
 break;
  }

   case '9' : {

  p = p +6;
 break;
  }



  }//switch




  }


cout<<p<<" leds\n";

   p = 0;





}



  return 0;
 }
