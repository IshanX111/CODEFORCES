#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i;
    cin>>n;
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        b[a[i]-1]=i+1;
    }

    for(i=0;i<n;i++){
        if(i==n-1){
            cout<<b[i]<<endl;
        }
        else{
            cout<<b[i]<<" ";
        }
    }




}
