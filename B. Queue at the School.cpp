#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,t,l,i,j;
    cin>>n>>t;
    string s;
    cin>>s;
    l=s.size();
    for(i=1;i<=t;i++){

        for(j=0;j<l-1;j++){

            if(s.at(j)=='B'&&s.at(j+1)=='G'){
                swap(s[j],s[j+1]);
                j++;
            }

        }
    }
    cout<<s<<endl;

}
