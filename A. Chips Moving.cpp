#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,c1=0,c2=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            c1++;
        }
        else{
            c2++;
        }
    }
    int x=min(c1,c2);
    cout<<x<<endl;





}
