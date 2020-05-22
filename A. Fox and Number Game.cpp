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
    ll n,i,c,j,res;
    cin>>n;
    ll a[n];
    rep0(i,n){
    cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    while(1){

        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                a[i]=a[i]-a[j];
                }
            }
        }
        c=0;

        rep0(i,n){
            if(a[i]==a[0]){
                    c++;
            }

        }
        if(c==n){
            res=a[0]*n;
            cout<<res<<endl;
            return 0;

        }
        else{
            c=0;
            sort(a,a+n,greater<int>());
        }

    }

}


