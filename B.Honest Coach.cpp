#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,i,j,m;

    cin>>t;
    while(t--){
        cin>>n;
        m=10000;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            if(a[i+1]-a[i]<m){
                m=a[i+1]-a[i];
            }
        }


        cout<<m<<endl;

    }




}
