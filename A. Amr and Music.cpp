#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k,i,l,j;
    cin>>n>>k;
    int a[n];
    int b[n];
    vector<int>x,y;
    for(i=0;i<n;i++){
        cin>>b[i];
        a[i]=b[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        k=k-a[i];
        if(k>=0){
            x.push_back(a[i]);
        }
    }


    l=x.size();

    if(l>0){
            cout<<l<<endl;
    for(i=0;i<l;i++){

        for(j=0;j<n;j++){
            if(x.at(i)==b[j]){
                    b[j]=-1;
                    y.push_back(j+1);
                    break;
            }
        }
    }
    for(i=0;i<y.size()-1;i++){
        cout<<y.at(i)<<" ";
    }
    cout<<y.at(i)<<endl;
    }
    else{
        cout<<l<<endl;
    }
}
