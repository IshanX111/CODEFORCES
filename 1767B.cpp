#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){


    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll>v;
        for(ll i=1;i<n;i++){
            v.push_back(a[i]);
        }

        sort(v.begin(),v.end());

        ll x=a[0];
        for(ll i=0;i<v.size();i++){
            if(v[i]>x){
                x=ceil((x+v[i])/2.0);
            }
        }
        cout<<x<<endl;
    }




}
