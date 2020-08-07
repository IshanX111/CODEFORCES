#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll t,a,b,n,s;
    cin>>t;
    while(t--){

        cin>>a>>b>>n>>s;

        if(n>s){

            if(b>=s){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{

            ll x=s/n;
            ll res=x*n;
            if(res==s && a>=x){
                    cout<<"YES"<<endl;

            }
            else if(res<=s){
                    if(a<x){
                        res=a*n;
                    }
                    else{
                        res=res;
                    }

                    ll c=s-res;
                    if(c>b){

                        cout<<"NO"<<endl;
                    }
                    else{
                        cout<<"YES"<<endl;
                    }

            }


        }





    }





}
