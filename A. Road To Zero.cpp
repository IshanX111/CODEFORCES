#include<bits/stdc++.h>
using namespace std;
int main(){


        long long x,a,b,c,d,t,res1,res2,res3;
        cin>>t;
        while(t--){
            cin>>a>>b>>c>>d;
            if(b>a){
            res1=(b-a)*c;
            res2=a*d;
            x=2*a*c;
            if(x<=res2){
                res3=res1+x;
            }
            else{
            res3=res1+res2;
            }
            }
            else if(a>b){
                res1=(a-b)*c;
                res2=b*d;
                x=2*b*c;
                if(x<=res2){
                    res3=res1+x;
                }
                else{
                    res3=res1+res2;
                }
            }
            else if(a==b){
                res2=a*d;
                x=2*a*c;
                if(x<=res2){
                    res3=x;
                }
                else{
                    res3=res2;
                }
            }
            cout<<res3<<endl;
        }

}
