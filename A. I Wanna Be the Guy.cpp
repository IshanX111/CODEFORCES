#include<bits/stdc++.h>
using namespace std;
int main(){

    set<int>s;
    int n,a,b,i,j,c,res;
    cin>>n>>a;
    int ar[a];
    for(i=0;i<a;i++){
        cin>>ar[i];
        s.insert(ar[i]);
    }
    cin>>b;
    int arr[b];
    for(i=0;i<b;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size()==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }





}
