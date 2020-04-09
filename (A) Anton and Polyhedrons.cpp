#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i;
    char c[13];
    scanf("%d ",&n);
    int sum=0;
    for(i=1;i<=n;i++){
        gets(c);
        if(c[0]=='T'){
            sum+=4;
        }
        else if(c[0]=='C'){
            sum+=6;
        }
        else if(c[0]=='O'){
            sum+=8;
        }

        else if(c[0]=='D'){
            sum+=12;
        }

        else if(c[0]=='I'){
            sum+=20;
        }
    }
    cout<<sum<<endl;


}
