#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,c1,c2,i;
    string s;
    cin>>n;
    cin>>s;
    c1=0;
    c2=0;
    for(i=0;i<s.size();i++){
        if(s.at(i)=='0'){
            c1++;
        }
        else if(s.at(i)=='1'){
            c2++;
        }
    }
    int res=max(c1,c2);
    int res1=min(c1,c2);

    cout<<res-res1<<endl;




}
