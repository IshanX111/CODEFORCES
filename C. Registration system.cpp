#include<bits/stdc++.h>
using namespace std;
int main(){

    map<string,int>mp;
    int t;
    string ch;
    cin>>t;
    while(t--){

        string s,s1;
        cin>>s;
        if(mp[s]==0){
            cout<<"OK"<<endl;
            mp[s]++;
        }
        else{

            ch=to_string(mp[s]);
            s1=s+ch;
            cout<<s1<<endl;
            mp[s]++;
        }

    }

}
