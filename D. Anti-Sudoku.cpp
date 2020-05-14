#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,j;
    string s[9];
    cin>>t;
    while(t--){

        for(i=0;i<9;i++){
            cin>>s[i];
            for(j=0;j<9;j++){
                if(s[i].at(j)=='2'){
                    s[i].at(j)='1';
                }
            }
        }

        for(i=0;i<9;i++){
                cout<<s[i]<<endl;
        }

    }
}
