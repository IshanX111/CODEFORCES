#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,a,j;
    cin>>a>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);


    int m=1111111;
    for(j=0;j<=n-a;j++){
        int mi=*min_element(arr+j,arr+j+a);
        int ma=*max_element(arr+j,arr+j+a);
        if(m>ma-mi){
            m=ma-mi;
        }

    }
     cout<<m<<endl;

}
