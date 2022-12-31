#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){


    ll t;
    cin>>t;
    while(t--){

        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>a && d>b && d>c && c>a){

            cout<<"YES"<<endl;

        }
        else if(a>c && b>a && b>d && d>c){
            cout<<"YES"<<endl;
        }

        else if(c>d && a>c && a>b && b>d){
            cout<<"YES"<<endl;
        }

        else if(d>b && c>d && c>a && a>b){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }

    }


}
