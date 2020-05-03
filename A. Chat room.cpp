#include<bits/stdc++.h>
using namespace std;
int main(){

    char ch;
    string s,s1;
    int c,l,i,j;
    cin>>s;
    l=s.size();
    s1="hello";
    i=0;
    c=0;
    for(j=0;j<l;j++){
            if(s1.at(i)==s.at(j)){
                i++;
                if(i>4){
                    c++;
                    break;
                }
            }
    }
    if(c==1){
        cout<<"YES"<<endl;
    }
    else{
            cout<<"NO"<<endl;

    }

}
