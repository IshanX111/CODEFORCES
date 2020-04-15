#include<bits/stdc++.h>
using namespace std;
int main()
{

    long t,a,b,res,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            res=0;
        }
        else if(a<b)
        {
            if((b-a)%2!=0)
            {
                res=1;
            }
            else
            {
                res=2;
            }
        }
        else if(a>b)
        {
            if((a-b)%2==0)
            {
                res=1;
            }
            else
            {
                res=2;
            }
        }
        cout<<res<<endl;
    }





}
