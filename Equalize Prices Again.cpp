#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,a;
    scanf("%d",&t);
    int sum=0;
    int res=0;
    for(i=1;i<=t;i++){
        int sum=0;
        int res=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++){

            scanf("%d",&a);
            sum=sum+a;
        }
        if(sum%n==0){
            res=sum/n;


        }
        else
        {
            res=(sum/n)+1;
        }
        printf("%d\n",res);

    }

    return 0;
}
