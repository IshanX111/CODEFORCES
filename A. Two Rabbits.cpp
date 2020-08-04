#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d,res,res1;
        cin>>a>>b>>c>>d;
        res=abs(a-b);
        res1=c+d;
        if(res%res1!=0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<res/res1<<endl;
        }


    }





}
