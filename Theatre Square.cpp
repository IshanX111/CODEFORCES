#include<iostream>
using namespace std;
int main(void)
{
    long long n,m,a,l=0,count1=0;
    cin>>n>>m>>a;

    if(n%a==0)
    {
        l=n/a;
    }
    else
    {
        l=n/a;
        l++;
    }

    if(m%a==0)
    {
        count1=m/a;
    }
    else
    {
        count1=m/a;
        count1++;
    }
    cout<<count1*l<<endl;
    return 0;
}
