#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,a,b,c,d;
    cin>>t;
    while(t--){

        cin>>a>>b>>c>>d;
        if(b==0){
            cout<<abs(c-d)<<endl;

        }
        else if (c==1 && d==a){
            cout<<abs(c-d)<<endl;
        }
        else if (d==1 && c==a){
            cout<<abs(c-d)<<endl;
        }
        else{

            int m=b;
            int x=min(c,d);
            int y=max(c,d);
            int store1,store2;
            while(1){

                if(x==1 || b==0 ){
                    store1=x;
                    break;
                }
                b--;
                x--;
            }
            while(1){

                if(y==a || b==0 ){
                    store2=y;
                    break;
                }
                b--;
                y++;


            }
            int finalres=abs(store1-store2);

            cout<<finalres<<endl;

        }


    }

}
