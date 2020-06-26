#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,j,k;
    cin>>n;
    int a[n];
    for(k=0;k<n;k++){
        cin>>a[k];
    }

    int sum1=0;
    int sum2=0;
    int c=0;
    i=0;
    j=n-1;
    while(i<=j){

        if(c%2==0){
            sum1=sum1+max(a[i],a[j]);
            if(a[j]>=a[i]){
                j--;
            }
            else{
                    i++;

            }
            c++;
        }
        else if(c%2!=0){
            sum2=sum2+max(a[i],a[j]);
            if(a[j]>=a[i]){
                j--;
            }
            else{
                    i++;

            }
            c++;
        }

    }
    cout<<sum1<<" "<<sum2<<endl;


}
