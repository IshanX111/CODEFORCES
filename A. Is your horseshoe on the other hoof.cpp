#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<long long>v;
    long long i,j,c,res;
    long long a[4];
    for(i=0;i<4;i++){
        cin>>a[i];
    }
    for(i=0;i<4;i++){
        c=0;
        for(j=0;j<v.size();j++){
            if(a[i]==v.at(j)){
                c++;
            }
        }
        if(c==0){
            v.push_back(a[i]);
        }
    }
    res=4-v.size();
    cout<<res<<endl;


}
