#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    int i,l,j;
    set<string>s;
    cin>>s1;
    l=s1.size();
    for(i=0;i<l;i++){
        s2="";
        char temp=s1.at(l-1);
        s2+=temp;
        s2+=s1.substr(0,l-1);
        s.insert(s2);
        s1=s2;

    }
    cout<<s.size()<<endl;

}
