#include<bits/stdc++.h>
using namespace std;
#define myinfinite 2147483647


void mymerge(int A[],int izq, int mid, int der){
    int n1=mid-izq+1;
    int n2=der-mid;
    int L[n1+2];
    int R[n2+2];
    int i=0, j=0, k=0;

    for(i=0; i<n1; i++){
        L[i]=A[izq+i];
    }

    for(j=0; j<n2; j++){
        R[j]=A[mid+1+j];
    }

    L[n1]=myinfinite;
    R[n2]=myinfinite;
    i=0;
    j=0;

    for(k=izq;k<=der;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }else{
            A[k]=R[j];
            j++;
        }
    }
}

void mergeSort(int A[], int izq, int der){
    int mid=0;
    if(izq<der){
        mid=(izq+der)>>1;
        mergeSort(A, izq, mid);
        mergeSort(A, mid+1, der);
        mymerge(A, izq, mid, der);

    }
}




int main(){
int n=0, c=0;
cin>>n;
while(n--){
int x=0;
cin>>x;
int a[x];
for(int i=0; i<x; i++){
cin>>a[i];
}
mergeSort(a, 0, x-1);
for(int i=0; i<x; i++){
 if(a[i]!= a[i+1]){
    c++;
 }
}

cout<<c<<"\n";
c=0;
}

return 0;
}
