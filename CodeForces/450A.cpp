#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, m;
cin>>n>>m;
queue<pair<int, int>> q;
for(int i=1; i<=n; i++){
int aux=0;
cin>>aux;
q.push({aux, i});
}//for

while(q.size()>1){
pair<int, int> aux = q.front();

if(q.front().first - m <=0){
    q.pop();
}else{
 aux.first = (aux.first)-m;
 q.push(aux);
 q.pop();
}//if

}//while

cout<<q.front().second<<"\n";


return 0;
}
