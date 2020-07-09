#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll a,b,c;
    cin>>a>>b;
    if((a==9 && b==1)){
        cout<<"9 10"<<endl;
    }
    else if(abs(a-b)>1 || a>b){
        cout<<"-1"<<endl;
    }
    else if(a==b){

        a=a*100+1;
        b=b*100+2;
        cout<<a<<" "<<b<<endl;
    }
    else {

        c=max(a,b)*100;
        a=max(a,b)*100-1;
        cout<<a<<" "<<c<<endl;
    }

}
