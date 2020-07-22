#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,j,k,x;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        int a[n1];
        int b[n2];
        for(i=0;i<n1;i++){
            cin>>a[i];
        }

        for(i=0;i<n2;i++){
            cin>>b[i];
        }
        int c=0;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                if(a[i]==b[j]){
                    x=a[i];
                    c++;
                    break;
                }
            }
            if(c>0){
                break;
            }
        }
        if(c==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<"1 "<<x<<endl;
        }




    }






}
