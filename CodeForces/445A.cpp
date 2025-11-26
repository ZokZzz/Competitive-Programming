#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, m;
    cin>>n>>m;

    char board[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>board[i][j];
        }//for
    }//for anidado

    bool f = true;

     for(int i=0; i<n; i++){
        i % 2 == 0 ? f = true : f = false;
        for(int j=0; j<m; j++){

           if(board[i][j] == '.'){

               if(f){

                f = false;
                cout<<"W";

               }else{

                f = true;
                cout<<"B";
               }



           }else{
             cout<<"-";
             f = !f;
               }//if anidado


        }//for
        cout<<"\n";
    }//for anidado





    return 0;
}
