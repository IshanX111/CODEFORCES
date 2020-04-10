#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,res,finalres;
    cin>>a>>b>>c;
    res=(c*(c+1)/2)*a;
    if(res>b){
      cout<<res-b<<endl;
    }
    else{
        cout<<"0"<<endl;
    }


}
