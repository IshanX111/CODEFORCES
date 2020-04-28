#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,h,m,res;
    cin>>t;
    while(t--){
        cin>>h>>m;
        res=1440-(h*60)-m;
        cout<<res<<endl;

    }

}
