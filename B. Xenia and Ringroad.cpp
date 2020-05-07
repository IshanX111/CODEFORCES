#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,m,i,sum;
    cin>>n>>m;
    long long a[m];
    for(i=0; i<m; i++)
    {
        cin>>a[i];
    }
    sum=a[0]-1;
    for(i=0; i<m-1; i++)
    {


        if(a[i+1]<a[i])
        {
            sum=sum+(n-a[i]+a[i+1]);
        }
        else
        {
            sum=sum+a[i+1]-a[i];
        }
    }
    cout<<sum<<endl;

}
