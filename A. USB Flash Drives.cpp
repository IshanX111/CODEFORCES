#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,s,i,c,sum;
    cin>>n>>s;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    c=0;
    for(i=0;i<n;i++){
        s=s-a[i];
        c++;
        if(s<=0){
            break;
        }
    }
    cout<<c<<endl;


}
