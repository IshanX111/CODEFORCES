#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n,m,i,j,x,y,t;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        cin>>t;
        for(j=0;j<t;j++){
            cin>>x;
            s.insert(x);
        }
    }
    y=s.size();
    if(y==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
