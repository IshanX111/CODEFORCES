#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        string s;
        cin>>s;
        int c1=0,c2=0;
        for(i=0;i<s.size();i++){


            if(s.at(i)=='('){
                c1++;
            }
            else if(s.at(i)==')'){
                c1--;
            }
            if(c1<0){
                c2++;
                s+=')';
                c1=0;
            }

        }
        cout<<c2<<endl;
    }




}
