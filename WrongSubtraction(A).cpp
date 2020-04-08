#include<bits/stdc++.h>
using namespace std;
int main(){

        int i,k;
        long long n;
        cin>>n>>k;
        for(i=1;i<=k;i++){
            if(n%10==0){
                n=n/10;
            }
            else{
                n--;
            }
        }
        cout<<n<<endl;

}
