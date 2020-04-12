#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i;
    cin>>n;
    string s1="I love ";
    string s2="I hate ";
    string s="";
    string s3="that ";
    string s4="it";
    for(i=1;i<=n;i++){
        if(i%2!=0){
            s=s+s2;
        }
        else{
            s=s+s1;
        }
        if(i!=n){
            s=s+s3;
        }
        if(i==n){
            s=s+s4;
        }
    }
    cout<<s<<endl;



}
