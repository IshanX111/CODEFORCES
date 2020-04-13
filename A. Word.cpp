#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    int l=s.size();

    int i,c1=0,c2=0;
    for(i=0;i<l;i++){
        if(s.at(i)>=65 && s.at(i)<=90){
            c1++;
        }
        else if(s.at(i)>=97 && s.at(i)<=122){
            c2++;
        }

    }
    if(c1==c2){
        for(i=0;i<l;i++){
            if(s.at(i)>=65 && s.at(i)<=90){
                s.at(i)=s.at(i)+32;
            }
        }
    }
    else if(c1>c2){
        for(i=0;i<l;i++){
            if(s.at(i)>=97 && s.at(i)<=122){
                s.at(i)=s.at(i)-32;
            }
        }
    }

    else if(c2>c1){
        for(i=0;i<l;i++){
            if(s.at(i)>=65 && s.at(i)<=90){
                s.at(i)=s.at(i)+32;
            }
        }
    }
    cout<<s<<endl;


}
