#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,c,ones,i,j;
    cin>>n;
    int a[3];
    c=0;
    for(i=1;i<=n;i++){
        ones=0;
        for(j=0;j<3;j++){
            cin>>a[j];
        }

        for(j=0;j<3;j++){
            if(a[j]==1){
                ones++;
            }
        }
        if(ones>=2){
            c++;
        }

    }
    cout<<c<<endl;


}
