#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll t,a,b,n;
    cin>>t;
    while(t--)
    {

        cin>>a>>b>>n;
        ll c=0,k;
        if(a<b){
                swap(a,b);
        }
        while(a<=n){
            b=b+a;
            k=a;
            a=b;
            b=k;
            c++;

        }
        cout<<c<<endl;

    }

}

