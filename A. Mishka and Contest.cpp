#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,i,j,sum=0;
    cin>>n>>k;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    i=0;
    while(a[i]<=k && i<n)
    {
        sum++;
        i++;
    }
    j=n-1;
    while(a[j]<=k && j>=0)
    {
        sum++;
        j--;
    }

    if(sum==2*n)
    {
        sum=sum/2;
    }
    else
    {
        sum=sum;
    }
    cout<<sum<<endl;


}
