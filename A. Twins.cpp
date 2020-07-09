#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,c=0,sum=0,sum1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){

        sum1+=a[i];
        c++;
        if(sum1>(sum/2)){
            cout<<c<<endl;
            return 0;
        }

    }
}

