#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,n,k,c;
    cin>>n>>k;
    int a[n];
    c=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());
    for(i=0;i<k;i++){
        if(a[i]>0 && a[i]>=a[k-1]){
            c++;
        }
    }
    for(i=k;i<n;i++){
        if(a[i]>=a[k-1] && a[i]!=0){
            c++;
        }
    }
    cout<<c<<endl;




}

