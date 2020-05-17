#include<bits/stdc++.h>
#define PI acos(-1.0)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep0(i,n) for(i=0;i<n;i++)
using namespace std;
int main(){
    FAST;

    long long t,i,a,b,c,d,sum,res,res1,res2,res4,finalres;
    double res3;
    cin>>t;
    for(i=1;i<=t;i++){
            cin>>a>>b>>c>>d;

            if(b>a || a==b ){
                cout<<b<<endl;
            }
            else if(b<a && c<d || c==d){
                cout<<"-1"<<endl;
            }

            else{

            res=a-b;
            //cout<<res<<endl;
            res1=c-d;
            //cout<<res1<<endl;
            if(res%res1==0){
            res3=res/res1;
            }
            else{
                res3=(res/res1)+1;
            }

            res4=res3;
            //cout<<res4
            finalres=(res4*c)+b;
            cout<<finalres<<endl;
            }

    }





}
