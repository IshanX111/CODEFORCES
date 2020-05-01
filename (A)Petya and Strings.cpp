#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,l,count1,count2;
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    l=s.size();

    for(i=0;i<l;i++){
        if(s.at(i)>=65 && s.at(i)<=90){
            s.at(i)=s.at(i)+32;
        }

        if(s1.at(i)>=65 && s1.at(i)<=90){
            s1.at(i)=s1.at(i)+32;
        }

    }
    if(s==s1){
        cout<<"0"<<endl;
    }
    else if(s<s1){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }

}
