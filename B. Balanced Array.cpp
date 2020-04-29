#include<bits/stdc++.h>
using namespace std;
int main(){

    long long t,n,i,c,a,x,y;
    cin>>t;
    while(t--){
            cin>>n;
            if(n%4!=0){
                cout<<"NO"<<endl;
            }
            else{
                x=0;
                y=0;
                long long a[n];
                long long b[n];

                cout<<"YES"<<endl;
                for(i=2,c=0;c<n/2;c++,i=i+2){
                        a[c]=i;
                        x=x+a[c];
                }
                for(i=0;i<n/2;i++){
                        cout<<a[i]<<" ";
                }
                for(i=1,c=0;c<(n/2)-1;c++,i=i+2){
                        b[c]=i;
                        y=y+b[c];
                }

                for(i=0;i<(n/2)-1;i++){
                        cout<<b[i]<<" ";
                }
                cout<<x-y<<endl;

            }

    }



}
