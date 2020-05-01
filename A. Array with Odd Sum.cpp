#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,i,sum,even,odd,t,k;
    cin>>t;
    for(k=0;k<t;k++){

    cin>>n;
    even=0;
    odd=0;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    if(sum%2!=0){
        cout<<"YES"<<endl;
    }
    else{
            if(even>0 && odd>0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }

    }

}
