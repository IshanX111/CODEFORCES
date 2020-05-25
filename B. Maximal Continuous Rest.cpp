#include<bits/stdc++.h>
#define PI acos(-1.0)
#define rep1(i,n) for(i=1;i<n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,a,n) for(i=a;i<n;i++)
#define repe1(i,n) for(i=1;i<=n;i++)
#define repe0(i,n) for(i=0;i<=n;i++)
#define repe(i,a,n) for(i=a;i<=n;i++)
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
using namespace std;
int main(){
    FAST;

    ll i,n,res;
    vector<ll>v;
    cin>>n;
    ll a[2*n];
    rep0(i,n){
        cin>>a[i];
        a[i+n]=a[i];
    }
    res=0;
    rep0(i,2*n){

        if(a[i]==1){
            res++;
        }
        if(a[i]==0){
            v.push_back(res);
            res=0;
        }

    }
    v.push_back(res);

    cout<<*max_element(v.begin(),v.end())<<endl;

}


