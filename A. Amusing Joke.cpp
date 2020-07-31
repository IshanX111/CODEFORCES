#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1,v2;
    string a,b,c;
    map<char,int>mp1,mp2;
    map<char,int>::iterator itr;
    cin>>a>>b>>c;
    int i,l1,l2,l3;
    l1=a.size();
    l2=b.size();
    l3=c.size();
    for(i=0;i<l1;i++){
        mp1[a.at(i)]++;
    }

    for(i=0;i<l2;i++){
        mp1[b.at(i)]++;
    }

    for(i=0;i<l3;i++){
        mp2[c.at(i)]++;
    }
    for(itr=mp1.begin();itr!=mp1.end();itr++){
        v1.push_back(itr->second);
    }

    for(itr=mp2.begin();itr!=mp2.end();itr++){
        v2.push_back(itr->second);
    }
    if(v1.size()!=v2.size()){
        cout<<"NO"<<endl;
    }
    else{
        int c=0;
        for(i=0;i<v1.size();i++){
            if(v1.at(i)!=v2.at(i)){
                c++;
                break;
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }



}
