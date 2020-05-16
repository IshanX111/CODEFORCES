#include<bits/stdc++.h>
#define PI acos(-1.0)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep0(i,n) for(i=0;i<n;i++)
using namespace std;
int main(){
    FAST;
    int a[6];
    int i,j,k,c,sum,sum1;
    sum=0;
    rep0(i,6){
        cin>>a[i];
        sum+=a[i];
    }
    c=0;
    sum1=0;
    for(i=0;i<4;i++){
            for(j=i+1;j<5;j++){
                for(k=j+1;k<6;k++){
                    sum1=a[i]+a[j]+a[k];
                    if((sum1*2)==sum){
                        c++;
                        break;
                    }
                    sum1=0;
                }
            }
    }

    if(c>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

