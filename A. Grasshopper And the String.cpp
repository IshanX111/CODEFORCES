#include<bits/stdc++.h>
using namespace std;
int main(){

    int c=0,x,l,i,m=0;
    string s;
    cin>>s;
    l=s.size();
    int check=0;
    for(i=0;i<l;i++){

        if(s.at(i)=='A' ||s.at(i)=='E' ||s.at(i)=='I' ||s.at(i)=='O' ||s.at(i)=='U' || s.at(i)=='Y'){
            c++;
            check++;
            m=max(m,c);
            c=0;

        }
        else{
            c++;
        }
    }
    c++;
    m=max(m,c);
    if(check==0){
        m=s.size()+1;
    }
    cout<<m<<endl;

}
