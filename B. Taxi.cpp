#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,c,j,sum,res,res1;
    vector<int>v;

    cin>>n;
    int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=1;i<=4;i++){
        c=0;
        for(j=0;j<n;j++){
            if(a[j]==i){
                c++;
            }
        }
        v.push_back(c);
    }

    sum=0;
    sum=sum+v.at(3);
    if(v.at(0)<v.at(2)){

            sum=sum+v.at(0);
            sum=sum+(v.at(2)-v.at(0));
            sum=sum+(v.at(1)/2);
            sum=sum+(v.at(1)%2);
    }

    else if(v.at(0)==v.at(2)){

            sum=sum+v.at(0);
            sum=sum+(v.at(1)/2);
            sum=sum+(v.at(1)%2);
    }
    else if(v.at(0)>v.at(2)){

            sum=sum+v.at(2);
            v.at(0)=v.at(0)-v.at(2);
            sum=sum+(v.at(1)/2);

            if(v.at(1)%2==0){
                if(v.at(0)<=4){
                    sum=sum+1;
                }
                else{
                res=v.at(0)/4;
                res1=v.at(0)%4;
                if(res1!=0){
                        sum=sum+res+1;
                }
                else{
                    sum=sum+res;
                }
                }
            }
            else if(v.at(1)%2!=0){
                if(v.at(0)<=2){
                    sum=sum+1;
                }
                else if(v.at(0)>2){
                    v.at(0)=v.at(0)-2;
                    res=v.at(0)/4;
                    res1=v.at(0)%4;
                    if(res1!=0){
                        sum=sum+res+1+1;
                    }
                    else{
                    sum=sum+res+1;
                    }
                }
            }

    }

    cout<<sum<<endl;


}
