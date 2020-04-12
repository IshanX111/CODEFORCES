
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l,p,m,x,i,j;
    string s;
    cin>>t;
    p=0;
    m=0;
    x=0;
    for(i=1;i<=t;i++){
        cin>>s;
        l=s.size();
        for(j=0;j<l;j++){
            if(s.at(j)=='+'){
                p++;
                break;
            }
            else if(s.at(j)=='-'){
                m++;
                break;
            }
        }
    }
    x=p-m;
    cout<<x<<endl;


}
