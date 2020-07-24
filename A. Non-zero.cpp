#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                    a[i]=1;
                    c++;
            }
        }
        int sum=0;
        int x=accumulate(a,a+n,sum);
        if(x==0){
            cout<<c+1<<endl;
        }
        else{
            //x=x*-1;
            //int res=x+1;
            cout<<c<<endl;
        }

    }




}
