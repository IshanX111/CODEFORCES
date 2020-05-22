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
    string s;
    ll i,x,j,c;
    cin>>s;
    ll l=s.size();
    for(i=0;i<l;i++){
        c=0;
        if(s.at(i)=='1'){
                x=i+1;
            for(j=x;j<l;j++){
                if(s.at(j)=='0'){
                    c++;
                }
            }

            if(c>=6){
                cout<<"yes"<<endl;
                return 0;
            }
            else{
                cout<<"no"<<endl;
                return 0;
            }
        }

    }
    if(c==0){
        cout<<"no"<<endl;
    }

}
