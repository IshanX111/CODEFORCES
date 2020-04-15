#include<bits/stdc++.h>
using namespace std;
int main(){

    long long t,a,b,c,i,sum,res1,res2,x;
    cin>>t;
    while(t--){
        sum=0;
        res1=0;
        res2=0;
        cin>>a>>b>>c;
        if(c%2==0){
            res1=(c/2)*a;
            res2=(c/2)*b;
            sum=res1-res2;
        }
        else if(c%2!=0){
            x=(c/2)+1;
            res1=x*a;
            res2=(c-x)*b;
            sum=res1-res2;
        }
        cout<<sum<<endl;
    }


}
