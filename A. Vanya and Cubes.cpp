#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,n,res;
    cin>>n;
    res=0;
    for(i=1;;i++){
        res=res+(i*(i+1))/2;
        if(res==n){
            cout<<i<<endl;
            break;
        }
        else if(res>n){
            cout<<i-1<<endl;
            break;
        }
    }
}