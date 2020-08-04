#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,x;
    cin>>n;
    int a[n];
    x=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        a[i]+=x;
        x=max(a[i],x);
    }

    for(i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[i]<<endl;




}
