#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,x,i,j,c;
    cin>>t;
    vector<int>v;
    while(t--){
        int n;
        cin>>n;
        for(i=0;i<2*n;i++){
            cin>>x;
            c=0;
            for(j=0;j<v.size();j++){
                if(v.at(j)==x){
                    c++;
                    break;
                }
            }
            if(c==0){
                v.push_back(x);
            }
        }
        for(j=0;j<v.size()-1;j++){
            cout<<v.at(j)<<" ";
        }
        cout<<v.at(j)<<endl;
        v.clear();


    }




}
