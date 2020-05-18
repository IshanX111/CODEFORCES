#include<bits/stdc++.h>
#define PI acos(-1.0)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep0(i,n) for(i=0;i<n;i++)
using namespace std;
int main(){
    FAST;
    long long l;
    cin>>l;
    if(l%2!=0){
        cout<<"0"<<endl;

    }
    else if(l%4==0){
        cout<<l/4-1<<endl;
    }
    else{
        cout<<l/4<<endl;
    }
}
