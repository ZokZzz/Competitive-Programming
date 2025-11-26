#include<bits/stdc++.h>
using namespace std;

string sorner(int i){
switch(i){

case 0 :{
return "100,00";
break;
}

case 1 :{
return "50,00";
break;
}

case 2 :{
return "20,00";
break;
}

case 3 :{
return "10,00";
break;
}

case 4 :{
return "5,00";
break;
}

case 5 :{
return "2,00";
break;
}


case 6 :{
return "1,00";
break;
}


}//switch




}



int main(){
int a[7] = {100, 50, 20, 10, 5, 2, 1};
int n, c=0, i=0;
cin>>n;
cout<<n<<"\n";
while(i!=7){
  if(n>=a[i]){
    n-=a[i];
    c++;
  } else{
  cout<<c<<" nota(s) de R$ "<<sorner(i)<<"\n";
  c=0;
  i++;
  }//if

}//for


return 0;
}
