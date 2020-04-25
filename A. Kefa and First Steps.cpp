#include<bits/stdc++.h>
using namespace std;
int main(){

    long long t,i,c,m,x;
    vector<long long>v;
    cin>>t;
    long long a[t];
    for(i=0;i<t;i++){
        cin>>a[i];
    }
    c=1;
    for(i=0;i<t-1;i++){
        if(a[i]<=a[i+1]){
            c++;
        }
        else if((a[i]>a[i+1])){
            v.push_back(c);
            c=1;
        }
    }
    v.push_back(c);
    m=*max_element(v.begin(),v.end());
    cout<<m<<endl;
}
