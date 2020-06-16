#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t,n,i;
    cin>>t;
    while(t--){

        cin>>n;
        
        int a[n];
        int c1,c2;
        c1=0;
        c2=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }  
        int check=0;
        for(i=0;i<n;i++){
            if(i%2!=a[i]%2){
                if(a[i]%2==0){
                    c1++;
                }
                else if(a[i]%2!=0){
                    c2++;
                }
                check++;
            }

        }
        if(c1==c2 && (c1!=0 && c2!=0)){
            cout<<c1<<endl;
        }
        else if(c1!=c2){
            cout<<"-1"<<endl;
        }
        else if(c1==0 && c2==0 && check==0){
            cout<<"0"<<endl;
        }



      }
  

}