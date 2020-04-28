#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,res;
    int a[3];
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    res=a[2]-a[0];
    cout<<res<<endl;

}
