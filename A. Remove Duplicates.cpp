#include<bits/stdc++.h>
using namespace std;
int main(){

    vector <int> v,v1;
    int n,i,t,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    int l=v.size();
    int c=0;
    for(i=0;i<l;i++){
        c=0;
        for(j=i+1;j<l;j++){
            if(v.at(i)==v.at(j)){
                c++;
                break;
            }
        }
        if(c==0){
            v1.push_back(v.at(i));
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
