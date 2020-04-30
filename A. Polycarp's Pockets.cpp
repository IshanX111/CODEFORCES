#include<bits/stdc++.h>
using namespace std;
int main(){

    set<int>s;
    set<int>::iterator itr;
    vector<int>x;
    int n,y,i,l,c,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    l=s.size();
    for(itr=s.begin();itr!=s.end();itr++){
        y=*itr;
        c=0;
        for(i=0;i<n;i++){
            if(a[i]==y){
                c++;
            }
        }
        x.push_back(c);
    }
    m=*max_element(x.begin(),x.end());
    cout<<m<<endl;


}
