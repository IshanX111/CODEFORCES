#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int i,l1,l2,l3;
    ll x,y;
    string s1="",s2="",s3="";
    string a,b,c;
    cin>>x>>y;
    ll m=x+y;
    a=to_string(x);
    b=to_string(y);
    c=to_string(m);
    l1=a.size();
    l2=b.size();
    l3=c.size();
    for(i=0; i<l1; i++)
    {
        if(a.at(i)!='0')
        {
            s1+=a.at(i);
        }
    }
    stringstream x1(s1);
    ll x2=0;
    x1>>x2;
    for(i=0; i<l2; i++)
    {
        if(b.at(i)!='0')
        {
            s2+=b.at(i);
        }
    }

    stringstream y1(s2);
    ll y2=0;
    y1>>y2;
     for(i=0; i<l3; i++)
    {
        if(c.at(i)!='0')
        {
            s3+=c.at(i);
        }
    }

    stringstream z1(s3);
    ll z2=0;
    z1>>z2;
    if((x2+y2)==z2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }





}
