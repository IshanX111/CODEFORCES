#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,res,res1,x;
    int c=0;
    cin>>a>>b;
    c=a;
    while(a>=b){
        x=(a/b);
        c+=x;
        a=(a/b)+(a%b);
    }
    cout<<c<<endl;
}
