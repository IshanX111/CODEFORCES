#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,x,y,res;
    cin>>a>>b;
    x=min(a,b);
    y=max(a,b);
    res=(y-x)/2;
    cout<<x<<" "<<res<<endl;

}
