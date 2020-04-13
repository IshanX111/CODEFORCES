#include<bits/stdc++.h>
using namespace std;
int main(){

    long long t,a,i,x;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a;
        if(a%2==0){
            x=a/2;
            x=x-1;
        }
        else{
        x=a/2;
        }
        cout<<x<<endl;
    }


}
