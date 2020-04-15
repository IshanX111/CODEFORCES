#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,c,l,j;
    vector<int>v;
    string s;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++){
        c=0;
        for(j=i+1;j<l;j++){
            if(s.at(i)==s.at(j)){
                c++;
                break;
            }
        }
        if(c==0){
            v.push_back(1);
        }
    }
    l=v.size();
    if(l%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }




}
