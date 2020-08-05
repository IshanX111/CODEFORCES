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
            cin>>a[i];
        }
        sort(a,a+n);
        int c=0;
        for(i=0;i<n-1;i++){
            int x=abs(a[i]-a[i+1]);
            if(x<=1){
                c++;
            }
        }
        if(c==n-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



}
