#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,l,x,k,j;
    char y;
    vector<int>v1;
    vector<char>v3,v2,v4;
    string s;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++){
        x=s.at(i)-48;
        if(x>=1 && x<=3){
            v1.push_back(x);
        }
        else{
        v2.push_back('+');
        }
    }
    sort(v1.begin(),v1.end());
    l=v1.size();
    for(i=0;i<l;i++){
        y=v1.at(i)+48;
        v3.push_back(y);
    }

    l=v2.size()+v3.size();
    for(i=0,k=0,j=0;i<l;i++){
        if(i%2==0){
                y=v3.at(k);
                v4.push_back(y);
                k++;
        }
        else{
            v4.push_back('+');
            j++;
        }
    }

    for(i=0;i<v4.size();i++){
        cout<<v4.at(i);
    }
    cout<<endl;

}
