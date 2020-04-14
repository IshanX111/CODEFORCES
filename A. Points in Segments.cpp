#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v,v1;
    int t,n,m,l,i,c,j,k,y;
    cin>>n>>m;

    for(i=0;i<n;i++){
        cin>>t>>y;
        for(k=t;k<=y;k++){
            v.push_back(k);
        }
    }
    l=v.size();
    for(i=1;i<=m;i++){
        c=0;
        for(j=0;j<l;j++){
            if(v.at(j)==i){
                c++;
                break;
            }
        }
        if(c==0){
        v1.push_back(i);
        }
    }
    l=v1.size();
    cout<<l<<endl;
    for(i=0;i<l;i++){
        cout<<v1.at(i);
        if(i<l-1){
            cout<<" ";
        }
        else{
            cout<<endl;
        }


    }



}
