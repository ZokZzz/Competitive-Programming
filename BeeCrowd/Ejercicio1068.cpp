#include<bits/stdc++.h>

 using namespace std;

 int main(){

 string ecuacion;

 int c;

 bool f = true;

 getline(cin, ecuacion);

 for(char i:ecuacion){

    if(i == '('){

        c ++;

    }

     if(c == ')'){

     if(c <= 0){

        f = false;

     }
         c--;
    }


 }

    if(c == 0){

       f = true;

    } else {

      f = false;

    }


   if(f == true){

    cout<<"correct\n";

   } else {

   cout<<"incorrect\n";

   }



 return 0;
 }

