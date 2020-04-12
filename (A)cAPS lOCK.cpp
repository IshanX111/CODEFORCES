#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,m,n,k;
    char c[105];
    gets(c);
    m=0;
    n=0;
    k=0;
    int l=strlen(c);
    for(i=0;i<l;i++){
        if(c[i]>=65 && c[i]<=90){
            m++;
            n++;
        }
    }
    if(c[0]>=97 && c[0]<=122){
            k++;
    }
    if(m==l){
        for(i=0;i<l;i++){
            c[i]=c[i]+32;
        }
    }
    else if((n+k)==l){
        c[0]=c[0]-32;
        for(i=1;i<l;i++){
            c[i]=c[i]+32;
        }
    }

    puts(c);


}
