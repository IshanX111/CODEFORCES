#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,l,i,x,res;
    string s;
    cin>>s;
    l=s.size();
    c=0;
    for(i=0;i<l;i++){
        if(s.at(i)=='a'){
            c++;
        }
    }
    x=l-c;
    if(x>=c){
    res=c+c-1;
    cout<<res<<endl;
    }
    else if(c>x){
        cout<<l<<endl;
    }
}
