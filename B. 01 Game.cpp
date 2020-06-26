#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        ll c1=0;
        ll c2=0;
        for(ll i=0;i<s.size();i++){
            if(s.at(i)=='0'){
                c1++;
            }
            else if (s.at(i)=='1'){
                c2++;
            }
        }
        if(c1==s.size() ||c2==s.size()){
            cout<<"NET"<<endl;
        }
        else{

                if(c1==c2){
                    if(c1%2==0){
                        cout<<"NET"<<endl;
                    }
                    else{
                        cout<<"DA"<<endl;
                    }
                }
                else if(c1!=c2){
                    ll x=min(c1,c2);
                    if(x%2==0){
                        cout<<"NET"<<endl;
                    }
                    else{
                        cout<<"DA"<<endl;
                    }

                }


        }

    }

}
