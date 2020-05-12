#include<bits/stdc++.h>
using namespace std;
int main(){

    double a,i,l,c,t,j,res;
    vector<double>v;

    for(i=3;i<=360;i++){
        res=(i-2)*180;
        res=res/i;
        v.push_back(res);
    }
    l=v.size();

    cin>>t;
    for(j=1;j<=t;j++){
    cin>>a;
    c=0;
    for(i=0;i<v.size();i++){
        if(v.at(i)==a){
            c++;
            break;
        }
    }
    if(c>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}
