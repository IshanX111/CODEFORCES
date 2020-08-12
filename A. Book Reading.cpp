#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,c;
    cin>>n>>sum;
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    c=0;
    int check=0;
    for(i=0;i<n;i++){
        check=86400-a[i];
        sum-=check;
        if(sum>0){
            c++;
        }
        else{
            c++;
            break;
        }
    }
    if(sum>0){
        c+=ceil(sum/86400);
    }
    cout<<c<<endl;


}
