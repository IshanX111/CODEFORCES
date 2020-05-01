#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,l,i,j;
    char ch;
    vector <char> v;
    string s;
    cin>>n;
    cin>>s;
    l=s.size();
    for(i=0,j=0;i<l;){
        ch=s.at(i);
        v.push_back(ch);
        j++;
        i=i+j;
    }
    l=v.size();
    for(i=0;i<l;i++){
        cout<<v.at(i);
    }
    cout<<endl;

}
