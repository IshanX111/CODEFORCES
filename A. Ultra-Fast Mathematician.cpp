#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3="";
    cin>>s1>>s2;
    int l,i;
    l=s1.size();
    for(i=0;i<l;i++){
        if(s1.at(i)!=s2.at(i)){
            s3=s3+'1';
        }
        else{
            s3=s3+'0';

        }
    }
    cout<<s3<<endl;



}
