#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll sum1=0;
        ll sum2=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0){
                sum1+=v[i];
            }
            else{
                sum2+=v[i];
            }
        }
        if(sum1>sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }




}
