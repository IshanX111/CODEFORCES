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
long long tut(long long x){

    long long n,d,m,y,z,res;
    n=x;
    m=-1;
    y=10;
    while(n>0){

        d=n%10;
        if(d>m){
            m=d;
        }
        if(d<y){
            y=d;
        }
        n=n/10;
    }
    res=m*y;

    return res;

}

int main(){
    FAST;

    ll u,w,t,i,a1,k,j,res,x;
    cin>>t;
    rep0(i,t){

        cin>>a1>>k;
        if(k==1){
            cout<<a1<<endl;
            continue;
        }
        res=0;
        rep1(j,k){

            x=tut(a1);

            if(x==0){

                break;
            }
            else{
                res=a1+x;
            }
            a1=res;
        }
        cout<<a1<<endl;

    }



}



