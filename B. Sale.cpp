#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<k;i++){
        if(a[i]<0){
            sum+=a[i]*-1;
        }

    }
    cout<<sum<<endl;




}
