#include<bits/stdc++.h>
using namespace std;
int main(){


    int a,b,i,c;

    cin>>a>>b;
    string s="";
    if(b<10){
        for(i=1;i<=a;i++){
           char ch=b+48;
           s=s+ch;
        }
    cout<<s<<endl;
    }
    else{
        if(a==1){
            cout<<"-1"<<endl;
        }
        else{
            for(i=1;i<a;i++){
               char ch='1';
               s=s+ch;
            }
            s=s+'0';
            cout<<s<<endl;
        }
    }

}
