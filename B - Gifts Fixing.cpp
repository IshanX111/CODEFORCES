#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t,amin,bmin,diffa,diffb,c,i;
    cin>>t;
    while(t--){
        ll n,c=0;
        cin>>n;
        ll a[n];
        ll b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        amin=*min_element(a,a+n);

        for(i=0;i<n;i++){
            cin>>b[i];
        }
        bmin=*min_element(b,b+n);

        for(i=0;i<n;i++){
            diffa=abs(a[i]-amin);
            diffb=abs(b[i]-bmin);
            ll min_diffab=min(diffa,diffb);
            ll max_diffab=max(diffa,diffb);
            c=c+min_diffab;
            min_diffab=max_diffab-min_diffab;
            c+=min_diffab;
        }

        cout<<c<<endl;

    }



}

