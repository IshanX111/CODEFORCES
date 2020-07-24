#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        if(a[0]==15){
            cout<<"DOWN"<<endl;
        }
        else if(a[0]==0){
            cout<<"UP"<<endl;
        }
        else{
        cout<<"-1"<<endl;
        }
    }
    else{
        int res=a[n-1]-a[n-2];
        if(a[n-1]==15){
            cout<<"DOWN"<<endl;
        }
        else if(a[n-1]==0){
            cout<<"UP"<<endl;
        }
        else if(res<0){
            cout<<"DOWN"<<endl;
        }
        else if(res>0){
            cout<<"UP"<<endl;
        }
    }






}
