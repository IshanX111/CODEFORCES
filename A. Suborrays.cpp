#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            a[i]=i+1;
        }

        for(i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[i]<<endl;
    }






}
