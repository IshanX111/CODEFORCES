#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t,a,b,c;
    cin>>t;
    while(t--){

        cin>>a>>b;
        if(a%b==0){
            printf("0\n");
        }
        else{
        c=b-(a%b);
        printf("%lld\n",c);
        }
    }


}
