#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll t,x,y;
    cin>>t;
    while(t--){

        cin>>x>>y;
        if(2*x<=y){
            cout<<x<<" "<<2*x<<endl;
        }
        else{
            cout<<"-1"<<" "<<"-1"<<endl;
        }


    }

}
