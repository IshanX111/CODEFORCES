#include<bits/stdc++.h>
using namespace std;
int main(){

    long long t,a,b,low,high,mid,d,i;
    cin>>t;
    for(i=1;i<=t;i++){
    cin>>a>>b;
    low=1;
    high=1e18;
    while(low<=high){

        mid=(low+high)>>1;
        d=mid-(mid/a);
        if(d>=b){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<low<<endl;
    }
}

