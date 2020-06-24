#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        string s;
        cin>>n;
        cin>>s;
        bool a=true;
        for(ll i=0;i<s.size()-1;i++){
            if(s.at(i)>s.at(i+1)){
                a=false;

            }
        }
        if(a==true){
            cout<<s<<endl;
        }
        else{
            ll c1=0;
            for(ll i=0;i<s.size();i++){

                if(s.at(i)=='1'){
                    break;
                }
                else{
                    c1++;
                }


            }
            ll c2=0;
            for(ll i=s.size()-1;i>=0;i--){

                if(s.at(i)=='0'){
                    break;
                }
                else{
                    c2++;
                }


            }
                string s1="";
            for(ll i=0;i<=c1;i++){
                s1+='0';
            }

            for(ll i=0;i<c2;i++){
                s1+='1';
            }

            cout<<s1<<endl;
            s1="";
        }



    }





}
