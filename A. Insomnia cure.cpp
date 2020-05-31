#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,d,e,i,f;
    cin>>a>>b>>c>>d>>e;
    f=0;
    for(i=1;i<=e;i++){
        if(i%a!=0 && i%b!=0 && i%c!=0 && i%d!=0){
            f++;
        }
    }
    cout<<e-f<<endl;
}
