#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    string s;
    cin>>t;
    while(t--){

        cin>>s;
        string s1="";
        int l=s.size();
        
        for(int i=0;i<l;i++){
            if(i==0 || i==1){
                s1=s1+s.at(i);
            }
            else if(i>1){
                if(i%2!=0){
                    s1=s1+s.at(i);
                }
            }
            
        }
        cout<<s1<<endl;

        
    }


}