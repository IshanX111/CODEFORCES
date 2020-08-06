#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll t;
    vector<ll>v;

    cin>>t;
    while(t--){
        ll n,k;
        cin>>n;
        ll i,j;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(i=2;i<=100;i++){
            ll c=0;
            for(j=0,k=n-1;j<k;){
                    if(a[j]+a[k]==i){
                        c++;
                        j++;
                        k--;
                    }
                    else if(a[j]+a[k]>i){
                        k--;
                    }

                    else if(a[j]+a[k]<i){
                        j++;
                    }

            }
            v.push_back(c);
        }
        ll m=*max_element(v.begin(),v.end());
        v.clear();
        cout<<m<<endl;
    }




}
