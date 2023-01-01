#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<char>v;
        ll c=0;
        if(s[0]=='1'){
            c=1;
        }
        for(ll i=1;i<n;i++){
            if(s[i]=='1' && c%2!=0){
                v.push_back('-');
                c++;
            }

            else if(s[i]=='1' && c%2==0){
                v.push_back('+');
                c++;
            }
            else{
                v.push_back('+');
            }
        }
        for(ll i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;





    }






}
