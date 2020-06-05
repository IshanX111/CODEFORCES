#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int n,i,res,current_min,current_max;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    current_min=a[0];
    current_max=a[0];
    res=0;
    for(i=0;i<n;i++){
        if(a[i]>current_max){
            res++;
            current_max=a[i];
        }
        else if(a[i]<current_min){
            res++;
            current_min=a[i];
        }

    }
    cout<<res<<endl;
 
 
}