#include<bits/stdc++.h>
#define PI acos(-1.0)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep0(i,n) for(i=0;i<n;i++)
using namespace std;
int main(){
    FAST;
    int n,c,j,i;
    cin>>n;
    int a[n];
    rep0(i,n){
        cin>>a[i];
    }
    c=0;
    for(j=1;j<n-1;j++){

        if(a[j-1]==1 && a[j+1]==1 && a[j]==0){
            c++;
            a[j+1]=0;
        }

    }
    cout<<c<<endl;
}
