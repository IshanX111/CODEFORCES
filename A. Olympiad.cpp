#include<bits/stdc++.h>
using namespace std;
int main(){


    int n,i,x;
    cin>>n;
    set<int>s;
    for(i=0;i<n;i++){
        cin>>x;
        if(x!=0){
            s.insert(x);
        }

    }
    x=s.size();
    cout<<x<<endl;
}
