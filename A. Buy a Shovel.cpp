#include<bits/stdc++.h>
using namespace std;
int main(){

    int k,r,c,res;
    cin>>k>>r;
    c=1;
    res=k;
    for(;;){
        if(res%10==r || res%10==0){
            break;
        }

        res+=k;
        c++;

    }
    cout<<c<<endl;

}
