#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x=*max_element(a,a+n);
    int y=*min_element(a,a+n);
    int pos1;
    int pos2;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]==x)
        {
            pos1=i;
        }

    }
    int c1=0;
    for(int i=pos1; i>0; i--)
    {
        if(a[i]>a[i-1])
        {
            swap(a[i],a[i-1]);
            c1++;
        }
    }
    ///
    for(int i=0; i<n; i++)
    {
        if(a[i]==y)
        {
            pos2=i;
        }

    }
    int c2=0;
    for(int i=pos2; i<n-1; i++)
    {
        if(a[i]<a[i+1])
        {
            swap(a[i],a[i+1]);
            c2++;
        }
    }
    int     res=c1+c2;
    cout<<res<<endl;





}
