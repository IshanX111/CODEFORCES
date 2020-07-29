#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long n,i,ans=0;
    cin>>n;
    for(i=1;i<=(n-1)/2;i++){
        ans+=i*i;
    }
    ans=ans*8;
    cout<<ans<<endl;
    }



}
