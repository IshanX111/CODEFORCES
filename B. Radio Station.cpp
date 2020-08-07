#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i;
    cin>>n>>m;
    string s2,s3;
    map<string,string>mp;
    map<string,string>::iterator itr;
    for(i=0;i<n;i++){
        cin>>s2>>s3;
        mp.insert({s3,s2});
    }
    for(i=0;i<m;i++){
         ///converting query to ip adress
        string s,s1;
        cin>>s>>s1;
        string s5=s1.substr(0,s1.size()-1);
        cout<<s<<" "<<s5<<"; #"<<mp[s5]<<endl;

    }

}
