#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<string>v;
    int n,i;
    cin>>n;
    string s,s1;
    for(i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    int c=0;
    for(i=0;i<n;i++){

        s1=v.at(i);

        if(s1.at(0)=='O' && s1.at(1)=='O'){
            v[i][0]='+';
            v[i][1]='+';
            c++;
            break;
        }

        else if(s1.at(3)=='O' && s1.at(4)=='O'){
            v[i][3]='+';
            v[i][4]='+';
            c++;
            break;
        }

    }
    if(c==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;

        for(i=0;i<n;i++){
            cout<<v.at(i)<<endl;
        }
    }





}

