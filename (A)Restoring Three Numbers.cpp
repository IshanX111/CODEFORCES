#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,x,c;
    int a[4];
    for(i=0;i<4;i++){
        cin>>a[i];
    }
    c=0;
    x=*max_element(a,a+4);
    for(i=0;i<4;i++){
        if(a[i]==x){
            continue;
        }
        else{
            c++;
            if(c==3)
            cout<<x-a[i]<<endl;
            else{
                cout<<x-a[i]<<" ";
            }
        }
    }

}
