#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,j,x,y;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    int mi=abs((a[0]-a[n-1]));
    x=1;
    y=n;
    for(i=0;i<n-1;i++){
            int m=abs(a[i]-a[i+1]);
            if(m<mi){
                mi=m;
                x=i+1;
                y=i+2;
            }


    }

    cout<<x<<" "<<y<<endl;


}
