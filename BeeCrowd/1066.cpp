#include<bits/stdc++.h>
using namespace std;
int main(){
int e=0, o=0, p=0, n=0;
for(int i=1; i<=5; i++){
    int aux;
    cin>>aux;
    if(aux%2==0){
      e++;
    }else{
    o++;
    }//if

       if(aux>0){
        p++;
    }else if(aux<0){
    n++;
    }//if

}//for

cout<<e<<" valor(es) par(es)\n";
cout<<o<<" valor(es) impar(es)\n";
cout<<p<<" valor(es) positivo(s)\n";
cout<<n<<" valor(es) negativo(s)\n";


return 0;
}
