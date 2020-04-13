#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,l,q,w,e;
    string s,s1,s2,s3,s4,s5,s6,s7;
    s4="po";
    s5="desu";
    s6="masu";
    s7="mnida";
    scanf("%d ",&n);
    for(i=1;i<=n;i++){

        cin>>s;
        l=s.size();

        if(l>=2){
        q=l-2;
        w=l-4;
        e=l-5;

        if(q>=0)
        s1=s.substr(q,2);

        if(w>=0)
        s2=s.substr(w,4);

        if(e>=0)
        s3=s.substr(e,5);

        if(s1.compare(s4)==0){
            cout<<"FILIPINO"<<endl;
        }
        else if((s2.compare(s5)==0) || (s2.compare(s6)==0))
        {
            cout<<"JAPANESE"<<endl;

        }
        else if(s3.compare(s7)==0){
            cout<<"KOREAN"<<endl;
        }





        }
    }

}
