#include<bits/stdc++.h>
using namespace std;
#define myinfinite 2147483647

int bs(int A[], int i, int j, int k) {
    int m = 0;
    int result = -1;
    while(i<=j){
    m = (i+j) >> 1;
    if(A[m] == k){
    result = m;
    j = m-1;
    } else if (k > A[m]) {
    i = m+1;
    } else {
    j = m-1;
    }
    }
    if (result == -1) {
    result =(-1) * i - 1;
    }
    return result;
}



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
ios_base::sync_with_stdio(0);
cin.tie(0);
int n, q, j=1;
while(cin>>n>>q && n && q){
int a[n], query[q];

for(int i=0; i<n; i++){
cin>>a[i];
}//for



mergeSort(a, 0, n-1);

 for(int i=0; i<q; i++){
cin>>query[i];
}//for
cout<<"CASE# "<<(j)<<":\n";

for(int i=0; i<q; i++){
int res= bs(a, 0, n-1, query[i]);
if(res>=0){
cout<<query[i]<<" found at "<<(res+1)<<"\n";
}else{
cout<<query[i]<<" not found\n";
res=0;
}//if

}//for

j++;

}//while
return 0;
}
