#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll x,y;
    cin>>x>>y;
    ll res=240-y;
    ll c=0;
    for(ll i=1;i<=x;i++){
        if((res-i*5)>=0){
            c++;
        }
        res=res-(i*5);
        //cout<<res<<endl;

    }
    cout<<c<<endl;



}
