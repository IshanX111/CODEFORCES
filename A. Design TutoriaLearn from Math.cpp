#include<bits/stdc++.h>
#define MAX 10000001
using namespace std;
char prime[MAX];
void sieve(int n){

    int i,j;
    int x=sqrt(n);
    prime[0]=prime[1]=1;
    for(i=4;i<=n;i+=2){
        prime[i]=1;
    }
    for(i=3;i<=x;i+=2){

        if(prime[i]==0){
            for(j=i*i;j<=n;j+=i){

                prime[j]=1;

            }
        }

    }


}



int main(){

    int x,i;
    int n=1000000;
    sieve(n);

    cin>>x;
    for(i=2;i<=x/2;i++){

        int y=x-i;
        if(prime[i]==1 && prime[y]==1){
            cout<<i<<" "<<y<<endl;
            return 0;
        }



    }

}
