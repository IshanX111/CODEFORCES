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

    ll i,j,k,m,sum,n;
    cin>>n;
    ll a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0){
                a[i][j]=1;
            }
            else{
                k=i-1;
                sum=0;
                for(m=0;m<=j;m++){
                    sum=sum+a[k][m];
                }
                a[i][j]=sum;
            }
        }
    }
    cout<<a[n-1][n-1]<<endl;

}
