#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k,i;
    set<int>s;
    set<int>::iterator itr;
    vector<int>v;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()<k){
        cout<<"NO"<<endl;
    }
    else{

        for(itr=s.begin();itr!=s.end();itr++){

            for(i=0;i<n;i++){

                if(*itr==a[i]){
                    v.push_back(i+1);
                    break;
                }

            }
            if(v.size()==k){
                break;
            }

        }

        cout<<"YES"<<endl;
        for(i=0;i<v.size()-1;i++){
            cout<<v.at(i)<<" ";
        }
        cout<<v.at(i)<<endl;

    }

}
