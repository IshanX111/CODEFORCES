#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i;
    map<string,int>mp;
    map<string,int>::iterator itr;
    string s,s1;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>s;
        s1=s;
        mp[s1]++;
    }
    int m=-1;
    for(itr=mp.begin();itr!=mp.end();itr++){

        if(itr->second>=m){
            m=itr->second;
        }

    }
    for(itr=mp.begin();itr!=mp.end();itr++){

        if(itr->second==m){
            cout<<itr->first<<endl;
            break;
        }

    }





}