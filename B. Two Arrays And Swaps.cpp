#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,k,i;
    cin>>t;
    while(t--){

        cin>>n>>k;
        int a[n];
        int b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        int j=0;
        for(i=0;j<=k,i<n;i++){

            if(j==k){
                break;
            }
            if(a[i]<b[i]){
                swap(a[i],b[i]);
                j++;
            }



        }
        int sum=0;
        for(i=0;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;

    }

}
