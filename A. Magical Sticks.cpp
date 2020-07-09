#include<bits/stdc++.h>
using namespace std;
int main(){

    long long x,t,res;
    cin>>t;
    while(t--){
    cin>>x;
    if(x==1 || x==2){
        cout<<"1"<<endl;
    }
    else{
            if(x%2!=0){
                res=(x/2)+1;
            }
            else{
                res=x/2;
            }
            cout<<res<<endl;
    }
    }

}
