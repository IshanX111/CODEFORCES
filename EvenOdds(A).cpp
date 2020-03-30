#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y;
    cin>>n>>x;
    if(n%2==0)
    {
        if(x<=(n/2))
        {
            y=(2*x)-1;
            cout<<y<<endl;
        }
        else
        {
            y=(x-(n/2))*2;
            cout<<y<<endl;
        }
    }
    else if(n%2!=0)
    {

        if(x<=((n/2)+1))
        {
            y=(2*x)-1;
            cout<<y<<endl;
        }
        else
        {
            y=(x-((n/2)+1))*2;
            cout<<y<<endl;
        }
    }



}
