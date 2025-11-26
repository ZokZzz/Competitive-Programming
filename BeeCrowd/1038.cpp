#include<bits/stdc++.h>

using namespace std;

int main(){


char a;

double b = 0;
double c = 0;

cin>>a;
cin>>b;

switch(a){

case '1':{

c = 4.00;
break;

}

case '2':{

c = 4.50;
break;
}

case '3':{

c = 5.00;
break;
}

case '4':{

c = 2.00;
break;
}

case '5':{

c = 1.50;
break;
}



}

c = c*b;

cout<<"Total: R$ "<<fixed<<setprecision(2)<<c<<"\n";






return 0;
}
