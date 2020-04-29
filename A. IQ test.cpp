#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,odd=0,even=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even==1){
        for(i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<i+1<<endl;
            return 0;
        }
        }
    }

    else if(odd==1){
        for(i=0;i<n;i++){
        if(a[i]%2!=0){
            cout<<i+1<<endl;
            return 0;
        }
        }
    }

}
