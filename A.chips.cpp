#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,i,j,sum;
    cin>>n>>m;
    sum=m;
    for(i=1;;i++){

        sum=sum-i;
        if(sum==0){
            sum=0;
            break;
        }
        if(sum<0){
            sum=sum+i;
            break;
        }
        if(i==n){
            i=0;
        }
    }
    cout<<sum<<endl;

}
