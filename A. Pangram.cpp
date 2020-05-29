#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,l;
    string s;
    set<char>x;
    cin>>n;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++){
        if(s.at(i)>='A' && s.at(i)<='Z'){
            char ch=s.at(i)+32;
            s.at(i)=ch;
        }
    }
    for(i=0;i<l;i++){
        x.insert(s.at(i));
    }
    if(x.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}