#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        int check=0;
        for(i=0;i<n;i++){
            if(a[i]!=b[i]){
                check++;
                break;
            }
        }
        if(check==0){
            cout<<"YES"<<endl;
        }
        else{
            int first_pointer,second_pointer;
            int k;
            for(i=0;i<n;i++){
                if(a[i]!=b[i]){
                    first_pointer=i;
                    k=b[i]-a[i];
                    break;
                }
            }
            for(i=n-1;i>=0;i--){
                if(a[i]!=b[i]){
                    second_pointer=i;
                    break;
                }
            }
            if(k<0){
                cout<<"NO"<<endl;
            }
            else{
                for(i=first_pointer;i<=second_pointer;i++){
                    a[i]=a[i]+k;
                }
                int check=0;
                for(i=0;i<n;i++){
                    if(a[i]!=b[i]){
                        check++;
                        break;
                    }
                }
                if(check==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }

            }


        }



    }







}