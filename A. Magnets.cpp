#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,a;
    string s="",s1;
    cin>>t;
    while(t--){
            cin>>s1;
            s+=s1;
    }
    int c=0;
    int l=s.size();
    for(int i=0;i<l-1;i++){

        if(s.at(i)==s.at(i+1)){
            c++;
        }

    }
    c++;
    cout<<c<<endl;

}
