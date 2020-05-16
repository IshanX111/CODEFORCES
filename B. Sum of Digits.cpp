#include<bits/stdc++.h>
#define PI acos(-1)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main(){
    FAST;

    long long x,i,c,sum;
    string s,s1;
    cin>>s;
    int l=s.size();
    if(l<2){
        cout<<"0"<<endl;
    }
    else{
        s1=s;
        c=0;
        l=s1.size();
        while(l>=2){
            c++;
            sum=0;
            for(i=0;i<l;i++){
                sum+=s1.at(i)-'0';
            }
            s1=to_string(sum);
            l=s1.size();
        }
        cout<<c<<endl;
    }

}
