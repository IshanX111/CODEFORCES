#include<bits/stdc++.h>
using namespace std;
int main(){

    int sum=0,i;
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int x=*max_element(a,a+n);

    for(i=0;i<n;i++){
        sum=sum+(x-a[i]);
    }
    cout<<sum<<endl;


}
