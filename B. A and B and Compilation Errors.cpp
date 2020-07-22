#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,i,n;
    cin>>n;
    int a[n];
    int b[n-1];
    int c[n-2];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n-1;i++){
        cin>>b[i];
    }

    for(i=0;i<n-2;i++){
        cin>>c[i];
    }
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);

    int c1=0,x,y;
    for(i=0;i<n-1;i++){

        if(b[i]!=a[i]){
            c1++;
            x=a[i];
            break;
        }


    }
    if(c1==0){
        x=a[n-1];
    }
    int c2=0;

    for(i=0;i<n-2;i++){

        if(c[i]!=b[i]){
            c2++;
            y=b[i];
            break;
        }


    }
    if(c2==0){
        y=b[n-2];
    }
    cout<<x<<endl<<y<<endl;




}
