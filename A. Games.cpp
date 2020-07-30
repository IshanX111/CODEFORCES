#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,j;
    vector<int>v1,v2;
    cin>>t;
    int ans=0;
    while(t--){
        int x,y;
        cin>>x>>y;
        v1.push_back(x);
        v2.push_back(y);
    }
    for(i=0;i<v1.size();i++){
        for(j=0;j<v2.size();j++){
            if(v1.at(i)==v2.at(j)){
                ans++;
            }
        }
    }
    cout<<ans<<endl;




}
