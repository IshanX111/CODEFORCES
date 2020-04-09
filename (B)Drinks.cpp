#include<bits/stdc++.h>
using namespace std;
int main(){

    double n,i,sum,a;
    cin>>n;
    sum=0;
    for(i=0;i<n;i++){
        cin>>a;
        sum=sum+a;
    }
    sum=sum/n;
    printf("%.12lf",sum);



}
