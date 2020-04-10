#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,b,c,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>b>>c;
        sum=sum+c-b;
        a[i]=sum;
    }
    sort(a,a+n);
    cout<<a[n-1]<<endl;


}
