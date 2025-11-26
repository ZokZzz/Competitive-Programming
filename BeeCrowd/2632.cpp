#include<bits/stdc++.h>
using namespace std;

int damage(string s){

if(s=="fire"){
return 200;
}//if


if(s=="water"){
return 300;
}//if


if(s=="earth"){
return 400;
}//if


if(s=="air"){
return 100;
}//if
}//funcion daño


int hechizo(string s, int nivel){

if(s=="fire"){
switch(nivel){
case 1:{
return 20;
break;
}

case 2:{
return 30;
break;
}

case 3:{
return 50;
break;
}
}//switch
}//if


if(s=="water"){
switch(nivel){
case 1:{
return 10;
break;
}

case 2:{
return 25;
break;
}

case 3:{
return 40;
break;
}
}//switch
}//if


if(s=="earth"){
switch(nivel){
case 1:{
return 25;
break;
}

case 2:{
return 55;
break;
}

case 3:{
return 70;
break;
}
}//switch
}//if


if(s=="air"){
switch(nivel){
case 1:{
return 18;
break;
}

case 2:{
return 38;
break;
}

case 3:{
return 60;
break;
}
}//switch
}//if
}//funcion hechizo



int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
int w=0, h=0, xmin=0, ymin=0;
cin>>w>>h>>xmin>>ymin;
string spell; int level=0, cx=0, cy=0;
cin>>spell;
cin>>level>>cx>>cy;
int d = damage(spell), r = hechizo(spell, level), xmax = xmin+w, ymax= ymin+h;
int closestx = max(xmin, min(cx, xmax)), closesty =  max(ymin, min(cy, ymax));
int auxx = cx-closestx, auxy = cy-closesty;
int distance = (auxx*auxx)+(auxy*auxy);
if(distance<=r*r){
 cout<<d<<"\n";
}else{
 cout<<0<<"\n";
}//if
}//while
return 0;
}
