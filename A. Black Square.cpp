#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,l,i,x,sum=0;
    int a[4];

    for(i=0;i<4;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++){
        x=s.at(i)-48;
        y=a[x-1];
        sum+=y;

    }
    cout<<sum<<endl;


}
