#include<bits/stdc++.h>
using namespace std;
int main(){

    long long a,b,c,d,e,n,res=0,rem;
    cin>>n;
    res=n/100;
    n=n%100;
    res=res+(n/20);
    n=n%20;
    res=res+(n/10);
    n=n%10;
    res=res+(n/5);
    n=n%5;
    res=res+n;
    cout<<res<<endl;

}
