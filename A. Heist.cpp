#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,c=0,i,res,m,x;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    m=*max_element(a,a+n);
    x=*min_element(a,a+n);
    res=m+1-x-n;
    cout<<res<<endl;

}
