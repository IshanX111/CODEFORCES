#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.size();
    int i,zeros,ones,c0,c1;
    zeros=0;
    ones=0;
    c0=0;
    c1=0;
    for(i=0;i<l-1;i++){

        if( s.at(i)=='0' &&s.at(i+1)=='0'){
            zeros++;
            if(zeros==6){
                c0++;
                break;
            }
        }
        else if( s.at(i)=='1' &&s.at(i+1)=='1'){

            ones++;
            if(ones==6){
                c1++;
                break;
            }
        }
        else if( (s.at(i)=='0' &&s.at(i+1)=='1') || (s.at(i)=='1' &&s.at(i+1)=='0')){
            zeros=0;
            ones=0;
        }
    }
    if(c0>0 || c1>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
