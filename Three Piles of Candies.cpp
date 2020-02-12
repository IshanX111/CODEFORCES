#include<iostream>
using namespace std;
int main()
{
    int t,i;
    long long a,b,c,res;
    cin>>t;

    for(i=1;i<=t;i++)
    {
       res=0;
       cin>>a>>b>>c;
       res=a+b+c;
       if(res%2==0)
       {

           cout<<res/2<<endl;
       }
       else
       {
           res=res-1;

           cout<<res/2<<endl;
       }



    }


    return 0;
}
