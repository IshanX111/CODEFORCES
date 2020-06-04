#include<bits/stdc++.h>
typedef long long  ll;
using namespace std;
int main(){

    ll t,a,b,check,c;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if(a==b){
            cout<<"0"<<endl;
        }

        else{
            if(a<b){
                if(b%a!=0){
                    cout<<"-1"<<endl;
                    continue;
                }
                ll res=b/a;

                if(res%2==0 || res%4==0 || res%8==0){
                     c=0;
                    check=0;
                    while(res!=1){

                        if(res%8==0){
                            c++;
                            res=res/8;

                        }
                        else if(res%4==0){
                            c++;
                            res=res/4;

                        }

                        else if(res%2==0){
                            c++;
                            res=res/2;
                        }
                        else{
                            check=1;
                            break;

                        }
                    }
                    if(check==1){
                        cout<<"-1"<<endl;
                    }
                    else{
                        cout<<c<<endl;
                    }
                }
                else{
                    cout<<"-1"<<endl;
                }
            }
            else  if(a>b){
                swap(a,b);
                if(b%a!=0){
                    cout<<"-1"<<endl;
                    continue;
                }

                ll res=b/a;

                if(res%2==0 || res%4==0 || res%8==0){
                     c=0;
                    check=0;
                    while(res!=1){

                        if(res%8==0){
                            c++;
                            res=res/8;

                        }
                        else if(res%4==0){
                            c++;
                            res=res/4;

                        }

                        else if(res%2==0){
                            c++;
                            res=res/2;
                        }
                        else{
                            check=1;
                            break;

                        }
                    }
                    if(check==1){
                        cout<<"-1"<<endl;
                    }
                    else{
                        cout<<c<<endl;
                    }
                }
                else{
                    cout<<"-1"<<endl;
                }
            }
        }


    }
}
