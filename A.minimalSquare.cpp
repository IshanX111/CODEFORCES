#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b;
        c=min(a,b);
        c=c+c;
        if(c>max(a,b)){
            cout<<c*c<<endl;
        }
        else{
            cout<<max(a,b)*max(a,b)<<endl;
        }




    }




}
