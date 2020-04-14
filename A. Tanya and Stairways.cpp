#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,n,t,c;
    cin>>n;
    vector <int> v,v1;
    for(i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    c=1;
    for(i=1;i<n;i++){
        if(v.at(i)==1){
            v1.push_back(c);
            c=1;
        }
        else{
            c++;
        }
    }
    v1.push_back(c);
    int l=v1.size();
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
