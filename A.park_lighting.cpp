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

    ll i,a,b,t,res,res1,res2,res3;
    cin>>t;
    rep0(i,t){

        cin>>a>>b;

        if(a>=b && a%2!=0 && b%2!=0){
                res=a/2;
                res=res*b;
                res1=b/2;
                if(b%2==0){
                    res1=res1;
                }
                else{
                    res1=res1+1;
                }
                res3=res1+res;
                cout<<res3<<endl;
        }
        else if(a%2==0 || b%2==0){
            cout<<(a*b)/2<<endl;
        }
        else if(b>a && a%2!=0 && b%2!=0){
                swap(a,b);
                res=a/2;
                res=res*b;
                res1=b/2;
                if(b%2==0){
                    res1=res1;
                }
                else{
                    res1=res1+1;
                }
                res3=res1+res;
                cout<<res3<<endl;
        }


    }
}
