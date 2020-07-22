#include<bits/stdc++.h>
using namespace std;

int main(){

        int a,b;
        cin>>a>>b;
        if(b%a!=0){
            cout<<"-1"<<endl;
        }
        else if(b==a){
            cout<<"0"<<endl;
        }
        else{
            int res=b/a;
            int c=0;
            while(res>=1){
                    if(res%2!=0){
                        break;
                    }
                    else{
                        res=res/2;
                        c++;
                    }

            }
             while(res>=1){
                    if(res%3!=0){
                        break;
                    }
                    else{
                        res=res/3;
                        c++;
                    }

            }
            if(res==1){
                cout<<c<<endl;

            }
            else{
                cout<<"-1"<<endl;
            }


        }





}
