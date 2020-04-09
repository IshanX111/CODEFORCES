#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,c=0,i;
    scanf("%d ",&n);
    char ca[n];
    gets(ca);
    for(i=0;i<n-1;i++){
        if(ca[i]==ca[i+1]){
            c++;
        }
    }
    cout<<c<<endl;



}
