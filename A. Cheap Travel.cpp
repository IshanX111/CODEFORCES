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

    int a,b,c,d,cost1,cost2,res1,res2,res3;
    cin>>a>>b>>c>>d;

    cost1=c*a;
    if(a%b==0){
        cost2=(a/b)*d;
    }
    else{
        res1=(a/b)*d;
        res2=res1+(a%b)*c;
        res3=((a/b)+1)*d;
        cost2=min(res2,res3);
    }

    cout<<min(cost1,cost2)<<endl;

}

