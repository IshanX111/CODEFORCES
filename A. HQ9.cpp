#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,l,c;
    string s;
    cin>>s;
    l=s.size();
    c=0;
    for(i=0;i<l;i++){
        if(s.at(i)=='H' || s.at(i)=='Q' || s.at(i)=='9'){
            c++;
            break;
        }
    }
    if(c==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}
