#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,c;
    cin>>n;
    c=0;
    while(n!=0){

        if(n>=5){
            c=c+(n/5);
            n=n%5;
        }
        if(n>=4){
            c=c+(n/4);
            n=n%4;
        }
        if(n>=3){
            c=c+(n/3);
            n=n%3;
        }

        if(n>=2){
            c=c+(n/2);
            n=n%2;
        }

        if(n>=1){
            c=c+(n/1);
            n=n%1;
        }

    }
    cout<<c<<endl;



}
