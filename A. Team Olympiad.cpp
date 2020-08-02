#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,c1,c2,c3,j;
    cin>>n;
    int a[n];
    vector<int>v1,v2,v3;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    c1=0,c2=0,c3=0;
    for(i=0;i<n;i++){
        if(a[i]==1){
            c1++;
        }
        else if(a[i]==2){
            c2++;
        }
        else if(a[i]==3){
            c3++;
        }
    }
    if(c1==0 || c2==0 || c3==0){
        cout<<"0"<<endl;
        return 0;
    }
    else{

        int x=min(c1,min(c2,c3));
        cout<<x<<endl;

        for(j=0;j<n;j++){
            if(a[j]==1 ){
                v1.push_back(j+1);
            }

            else if(a[j]==2 ){
                v2.push_back(j+1);
            }

            else if(a[j]==3 ){
                v3.push_back(j+1);
            }
        }
        for(j=0;j<x;j++){

            cout<<v1.at(j)<<" "<<v2.at(j)<<" "<<v3.at(j)<<endl;

        }


    }

}
