#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,x,i,y,z,res;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int l=s1.size();
    res=0;
    for(i=0;i<l;i++){
        x=s1.at(i)-'0';
        y=s2.at(i)-'0';
        z=abs(x-y);
        if(z>5){
            res=res+10-z;
        }
        else{
            res=res+z;
        }
    }
    cout<<res<<endl;
}
