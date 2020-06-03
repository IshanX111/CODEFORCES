#include<bits/stdc++.h>
using namespace std;
int main(){

    string s="";
    for(int i=1;i<=1000;i++){
        string s1=to_string(i);
        s=s+s1;
    }
    int n;
    cin>>n;
    cout<<s.at(n-1)<<endl;



}
