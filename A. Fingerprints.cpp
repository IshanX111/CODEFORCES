#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,m,i,j;
    cin>>n>>m;
    vector<int>v;
    int a[n];
    int b[m];
    for(i=0;i<n;i++){
        cin>>a[i];        
    }
    for(i=0;i<m;i++){
        cin>>b[i];        
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                v.push_back(a[i]);
            }
        }        
    }
    for(i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

}