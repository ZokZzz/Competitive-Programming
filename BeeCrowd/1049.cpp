#include<bits/stdc++.h>
using namespace std;

void sorner(string str, string str2, string str3){

if(str=="vertebrado" && str2=="ave" && str3=="carnivoro"){
cout<<"aguia\n";
}

if(str=="vertebrado" && str2=="ave" && str3=="onivoro"){
cout<<"pomba\n";
}

if(str=="vertebrado" && str2=="mamifero" && str3=="onivoro"){
cout<<"homem\n";
}

if(str=="vertebrado" && str2=="mamifero" && str3=="herbivoro"){
cout<<"vaca\n";
}

if(str=="invertebrado" && str2=="inseto" && str3=="hematofago"){
cout<<"pulga\n";
}

if(str=="invertebrado" && str2=="inseto" && str3=="herbivoro"){
cout<<"lagarta\n";
}

if(str=="invertebrado" && str2=="anelideo" && str3=="hematofago"){
cout<<"sanguessuga\n";
}

if(str=="invertebrado" && str2=="anelideo" && str3=="onivoro"){
cout<<"minhoca\n";
}


}




int main(){
    string s, s2, s3;
    cin>>s>>s2>>s3;
    sorner(s, s2, s3);
    return 0;
}
