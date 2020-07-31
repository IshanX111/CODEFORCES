#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else if(n<0 && n>=-9){
        cout<<"0"<<endl;
    }
    else{
        string s=to_string(n);
        int l=s.size();
        char ch1=s.at(l-1);
        char ch2=s.at(l-2);
        int a=ch1-48;
        int b=ch2-48;
        if(a==b){
            string s3="";
            for(int i=0;i<l-2;i++){
                s3+=s.at(i);
            }

            //cout<<ch1<<endl;
            s3+=ch1;
            stringstream x(s3);
            ll y=0;
            x>>y;
            cout<<y<<endl;

        }
        else if(b>a){
            string s3="";
            for(int i=0;i<l-2;i++){
                s3+=s.at(i);
            }
            s3+=ch1;
            stringstream x(s3);
            ll y=0;
            x>>y;
            cout<<y<<endl;
        }
        else {
            string s3="";
            for(int i=0;i<l-2;i++){
                s3+=s.at(i);
            }
            s3+=ch2;
            stringstream x(s3);
            ll y=0;
            x>>y;
            cout<<y<<endl;
        }
    }






}
