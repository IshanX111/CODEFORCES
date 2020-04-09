#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        cout<<"EASY"<<endl;
    }
    else
    {
        cout<<"HARD"<<endl;
    }



}
