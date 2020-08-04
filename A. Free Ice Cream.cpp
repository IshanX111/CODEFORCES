#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t,x,initial;
    char ch;
    cin>>t>>initial;
    ll sum=initial;
    ll d=0;
    while(t--){
        cin>>ch>>x;
        if(ch=='+'){
            sum+=x;
        }
        else if(ch=='-'){

            ll  checksum=sum-x;
            if(checksum<0){
                sum=sum;
                d++;
            }
            else{
                sum-=x;

            }
        }

    }
    cout<<sum<<" "<<d<<endl;


}
