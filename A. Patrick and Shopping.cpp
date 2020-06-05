#include<bits/stdc++.h>
using namespace std;
int main(){

    long long res4,y,x,a,b,c,res,res1,res2;
    cin>>a>>b>>c;
    x=min(a,b);
    y=max(a,b);
    res1=x+c+y;
    res2=x*2+y*2;
    res4=x*2+c*2;
    cout<<min(res1,min(res2,res4))<<endl;
}