#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    if(s.at(0)>=97 && s.at(0)<=122){
        s.at(0)=s.at(0)-32;
    }
    cout<<s<<endl;



}
