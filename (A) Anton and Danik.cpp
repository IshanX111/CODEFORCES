#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,a,d,i;
    scanf("%d ",&n);
    char c[n];
    gets(c);
    a=0;
    d=0;
    for(i=0;i<n;i++){
            if(c[i]=='A'){
                a++;
            }
            else if(c[i]=='D'){
                d++;
            }
    }
    if(a>d){
        cout<<"Anton"<<endl;

    }
    else if(d>a){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }



}
