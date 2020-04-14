#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,a,b,c,d,sum1=0,sum2=0;
    cin>>n>>a>>b>>c>>d;
    sum1=(n*a)+(c*2);
    sum2=(n*b)+(d*2);
    if(sum1==sum2){
        cout<<"Friendship"<<endl;
    }
    else if(sum1<sum2){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }

}
