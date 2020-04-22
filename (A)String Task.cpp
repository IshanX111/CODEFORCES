#include<bits/stdc++.h>
using namespace std;
int main(){

    int i;
    vector <char> c;
    string s;
    cin>>s;
    int l=s.size();
    for(i=0;i<l;i++){
        if(s.at(i)=='a' || s.at(i)=='e' ||s.at(i)=='i' ||s.at(i)=='o' ||s.at(i)=='u' ||s.at(i)=='y' ||s.at(i)=='Y'||s.at(i)=='A' || s.at(i)=='E' ||s.at(i)=='I' ||s.at(i)=='O' ||s.at(i)=='U' )
        {
            continue;
        }
        if(s.at(i)>=65 && s.at(i)<=90){
            s.at(i)=s.at(i)+32;
        }
        c.push_back('.');
        c.push_back(s.at(i));
    }
    int k=c.size();
    for(i=0;i<k;i++){
        cout<<c.at(i);
    }
    cout<<endl;
}
