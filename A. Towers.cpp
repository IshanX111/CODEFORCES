#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    set<int>s;
    set<int>::iterator itr;

    int n,i,x,c,y,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    m=s.size();

    for(itr=s.begin();itr!=s.end();itr++){
            c=0;
            x=*itr;
            for(i=0;i<n;i++){
                if(x==a[i]){
                    c++;
                }
            }
            v.push_back(c);

    }
    y=*max_element(v.begin(),v.end());
    cout<<y<<" "<<m<<endl;

}
