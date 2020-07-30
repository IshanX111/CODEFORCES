#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    set<char>s1;
    getline(cin,s);
    int l=s.size();
    int i;
    for(i=0;i<l;i++){

        if(s.at(i)>='a' && s.at(i)<='z'){
            s1.insert(s.at(i));
        }

    }
    int z=s1.size();
    cout<<z<<endl;

}
