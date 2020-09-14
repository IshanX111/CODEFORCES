#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    double t,a,b,k;
    cin>>t;
    while(t--){

        cin>>a>>b;

        ll res=(long long)ceil(abs(a-b)/10);

        cout<<res<<endl;
    }

}
