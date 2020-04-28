#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,x,y,c,i;
    string s;
    char ch;
    cin>>n;
    while(n--){

        cin>>s;
        l=s.size();
        if(l==1){
            cout<<"0"<<endl;
            continue;
        }
        else{
        x=0;y=0;
        bool a=false;
        for(i=0;i<l;i++){
            if(s.at(i)=='1'){
                x=i;
                a=true;
                break;
            }
        }
        for(i=l-1;i>=0;i--){
            ch=s.at(i);
            if(ch=='1'){
                y=i;
                a=true;
                break;
            }
        }

        if(a==true){
        c=0;
        for(i=x;i<=y;i++){
            ch=s.at(i);
            if(ch=='0'){
                c++;
            }
        }
        }
        if(a==false){
            c=0;
        }
         cout<<c<<endl;

    }
    }
}
