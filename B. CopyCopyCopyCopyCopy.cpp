#include<bits/stdc++.h>
using namespace std;
int main(){

    long long t;
    cin>>t;
    set<long long>s;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int i;
        for(i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        cout<<s.size()<<endl;
        s.clear();
    }

}
