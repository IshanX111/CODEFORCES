#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,x,i,sum=0;
    cin>>n>>x;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>x){
            sum=sum+2;
        }
        else{
            sum=sum+1;
        }
    }
    cout<<sum<<endl;


}

