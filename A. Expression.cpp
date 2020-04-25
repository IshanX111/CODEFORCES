#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,m,d;
    cin>>a>>b>>c;
    int ar[5];
    ar[0]=a+(b*c);
    ar[1]=a*(b+c);
    ar[2]=a*b*c;
    ar[3]=(a+b)*c;
    ar[4]=a+b+c;
    m=*max_element(ar,ar+5);
    cout<<m<<endl;

}
