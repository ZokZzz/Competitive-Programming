#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n, uno=0, dos=0, tres=0, cuatro=0;
cin>>n;
vector<int> a(n, 0);
for(int i=0; i<n; i++){
 cin>>a[i];
 switch(a[i]){
 case 1:{
 uno++;
 break;
 }

 case 2:{
 dos++;
 break;
 }

 case 3:{
 tres++;
 break;
 }

 case 4:{
 cuatro++;
 break;
 }

 }//switch

}//for

if(dos<=1){

} else if(dos%2==0){
 cuatro+= dos/2;
 dos = 0;
}else{
 cuatro += floor(dos/2);
 dos = 1;

}

while(dos && uno){
tres++;
dos--;
uno--;
}


while(tres && uno){
cuatro++;
tres--;
uno--;
}


if(uno>=4){
cuatro+=uno/4;
uno = uno%4;
}


if(uno>=3){
tres+=uno/3;
uno = uno%3;
}


if(uno>=2){
dos+=uno/2;
uno = uno%2;
}



cout<<(cuatro+dos+tres+uno)<<"\n";


return 0;
}

