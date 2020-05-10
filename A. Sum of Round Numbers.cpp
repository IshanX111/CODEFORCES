#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v;
    string s;
    int t,i,x,m,d,res,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        cin>>x;
        m=1;
        while(x>0){
            d=x%10;
            if(d>0){
                res=d*m;
                v.push_back(res);
            }
            m=m*10;
            x=x/10;
        }
        sort(v.begin(),v.end(),greater<int>());

        cout<<v.size()<<endl;
        for(k=0;k<v.size();k++){
            cout<<v.at(k)<<" ";
        }
        cout<<endl;
        v.clear();
    }

}
