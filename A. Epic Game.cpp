#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int a,b,n,i,x,y,z;
    cin>>a>>b>>n;
    for(i=1;;i++){
      
        if(i%2!=0){
            y=__gcd(a,n);
            n=n-y;
        }
        else if(i%2==0){
            z=__gcd(b,n);
            n=n-z;
        }
        if(n<0){
            x=i;
            break;
        }
        
    }
    if(i%2!=0){
        cout<<"1"<<endl;

    }
    else
    {
        cout<<"0"<<endl;
    }
    
}