#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,l,ones=0,zeros=0;
    cin>>n;
    string s;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++){
        if(s.at(i)=='z'){
            zeros++;
        }
        else if(s.at(i)=='n'){
            ones++;
        }

    }
    for(i=0;i<ones;i++){
        cout<<1<<" ";
    }
    for(i=0;i<zeros;i++){
        cout<<0<<" ";
    }
    cout<<endl;

}
