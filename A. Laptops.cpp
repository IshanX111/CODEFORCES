#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<pair<int,int>>v;
    vector<int>v3;
    int t,n,i;
    cin>>t;
    n=t;
    while(t--){
        int x,y;
        cin>>x>>y;
        v3.push_back(y);
        v.push_back(make_pair(x,y));
    }
    sort(v3.begin(),v3.end());
    sort(v.begin(),v.end());
    int c=0;
    for(i=0;i<n;i++){
        if(v[i].second!=v3.at(i)){
            c++;
            break;
        }
    }
    if(c>0){
        cout<<"Happy Alex"<<endl;
    }
    else{
        cout<<"Poor Alex"<<endl;
    }


}
