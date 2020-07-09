#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i;
    cin>>t;
    string s,s1,s2;
    vector<int>v1,v2;
    cin>>s;
    s1=s.substr(0,t);
    s2=s.substr(t,t);

    for(i=0;i<s1.size();i++){
        v1.push_back(s1.at(i)-'0');
    }
    for(i=0;i<s2.size();i++){
        v2.push_back(s2.at(i)-'0');
    }
    sort(v1.begin(),v1.end());

    sort(v2.begin(),v2.end());


    int c=0,c1=0;
    for(i=0;i<s1.size();i++){
        if(v1.at(i)>=v2.at(i)){
            c++;
            break;
        }
    }

    for(i=0;i<s1.size();i++){
        if(v1.at(i)<=v2.at(i)){
            c1++;
            break;
        }
    }
    if(c==0 ||c1==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
