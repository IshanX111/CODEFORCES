#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;

    int sum=0,x;
    for(i=0;i<n;i++){
        if(a[i]!=-1 && sum<=0){
            x=0;
            sum=x;
        }
        sum+=a[i];
        if(sum<0){
            c++;
        }
    }
    cout<<c<<endl;

}

