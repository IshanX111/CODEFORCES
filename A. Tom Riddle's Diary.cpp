#include<bits/stdc++.h>
using namespace std;
int main(){

    map<string,int>mp;
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        if(mp[s]==0){
            cout<<"NO"<<endl;
            mp[s]++;
        }
        else{
            cout<<"YES"<<endl;
            mp[s]++;
        }

    }

}
