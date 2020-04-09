#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,x;
    string s,s1,s2;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>s;
        x=s.size();
        if(x<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s.at(0)<<x-2<<s.at(x-1)<<endl;
        }

    }



}
