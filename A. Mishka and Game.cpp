#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,p1,p2,a,b;
    cin>>t;
    p1=0;
    p2=0;
    while(t--){
        cin>>a>>b;
        if(a>b){
            p1++;
        }
        else if(b>a){
            p2++;
        }
    }
    if(p1==p2){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(p1>p2){
        cout<<"Mishka"<<endl;
    }
    else if(p2>p1){
        cout<<"Chris"<<endl;
    }


}
