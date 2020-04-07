#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,j,k;
    cin>>n;
    int m=3*n;
    int a[m];
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    int sumx=0;
    int sumy=0;
    int sumz=0;

    for(i=0,j=1,k=2;i<m;i=i+3,j=j+3,k=k+3){
        sumx=sumx+a[i];
        sumy=sumy+a[j];
        sumz=sumz+a[k];

    }

    if(sumx==0 && sumy==0 && sumz==0 ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
