#include<bits/stdc++.h>
using namespace std;
int main(){


    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        if(n<=2){
            cout<<"1"<<endl;
        }
        else{
            int res=(n-2)/x;
            if((n-2)%x==0){
                res=res;
            }
            else{
                res=res+1;
            }
            cout<<res+1<<endl;
        }
    }

}
