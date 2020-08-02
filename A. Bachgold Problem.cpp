#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,x,i,y;
    cin>>n;

    if(n%2==0){
        x=n/2;
        cout<<x<<endl;
        for(i=1;i<x;i++){
            cout<<"2"<<" ";
        }
        cout<<"2"<<endl;
    }
    else{
        x=(n/2)-1;
        y=n/2;
        cout<<y<<endl;
        for(i=1;i<=x;i++){
            cout<<"2"<<" ";
        }
        cout<<"3"<<endl;

    }

}
