/*#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
unsigned long long int a=0, b=0;
while(cin>>a>>b){
unsigned long long int cero=0, uno=0, dos=0, tres=0, cuatro=0, cinco=0, seis=0, siete=0, ocho=0, nueve=0;
 if(!a && !b){return 0;}//if

 if(n<=b){



   string str = to_string(n);
   for(int j=0; j<str.size(); j++){
    switch(str[j]){
    case '0':{cero++; break;}
    case '1':{uno++; break;}
    case '2':{dos++; break;}
    case '3':{tres++; break;}
    case '4':{cuatro++; break;}
    case '5':{cinco++; break;}
    case '6':{seis++; break;}
    case '7':{siete++; break;}
    case '8':{ocho++; break;}
    case '9':{nueve++; break;}


    }//switch

   }//for

     n++;

 }//if


cout<<cero<<" "<<uno<<" "<<dos<<" "<<tres<<" "<<cuatro<<" "<<cinco<<" "<<seis<<" "<<siete<<" "<<ocho<<" "<<nueve<<"\n";


}//while
return 0;
}
*/





#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
unsigned long long int a, b;
while(cin>>a>>b){

if(!a && !b){return 0;}//if
unsigned long long int cero=0, uno=0, dos=0, tres=0, cuatro=0, cinco=0, seis=0, siete=0, ocho=0, nueve=0;
 for(unsigned long long int i=a; i<=b; i++){
     string str = to_string(i);
     int c=0;
     switch(str[c]){
    case '0':{cero++; break;}
    case '1':{uno++; break;}
    case '2':{dos++; break;}
    case '3':{tres++; break;}
    case '4':{cuatro++; break;}
    case '5':{cinco++; break;}
    case '6':{seis++; break;}
    case '7':{siete++; break;}
    case '8':{ocho++; break;}
    case '9':{nueve++; break;}


    }//switch
    c++;
 }//for


cout<<cero<<" "<<uno<<" "<<dos<<" "<<tres<<" "<<cuatro<<" "<<cinco<<" "<<seis<<" "<<siete<<" "<<ocho<<" "<<nueve<<"\n";


}//while
return 0;
}
