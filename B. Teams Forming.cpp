#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0;
    for(i=0;i<n;i=i+2){
        sum+=a[i+1]-a[i];
    }
    cout<<sum<<endl;



}