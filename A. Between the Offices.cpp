#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,c1,c2;
    scanf("%d ",&n);
    char c[n];
    gets(c);
    c1=0,c2=0;

    for(i=0;i<n-1;i++){
        if(c[i]=='S' && c[i+1]=='F'){
            c1++;
        }
        else if(c[i]=='S' && c[i+1]=='S'){
            continue;
        }
        else if(c[i]=='F' && c[i+1]=='F'){
            continue;
        }

        else{
            c2++;
        }
    }

    if(c1>c2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
