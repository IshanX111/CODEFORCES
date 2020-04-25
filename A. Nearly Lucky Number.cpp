#include<bits/stdc++.h>
using namespace std;
int main(){

    long long i,l,c;
    string s;
    cin>>s;
    l=s.size();
    c=0;
    for(i=0;i<l;i++){
        if(s.at(i)=='4' || s.at(i)=='7'){
            c++;
        }
    }
    if(c==4 || c==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
