#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j;

    char a[8][8];
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            cin>>a[i][j];
        }
    }
    int w=0,b=0;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(a[i][j]>='A' && a[i][j]<='Z' ){
                if(a[i][j]=='Q'){
                    w+=9;
                }
                else if(a[i][j]=='R'){
                    w+=5;
                }

                else if(a[i][j]=='B'){
                    w+=3;
                }

                else if(a[i][j]=='N'){
                    w+=3;
                }

                else if(a[i][j]=='P'){
                    w+=1;
                }

                else if(a[i][j]=='K'){
                    w+=0;
                }
            }
            else if(a[i][j]>='a' && a[i][j]<='z' ){
                    if(a[i][j]=='q'){
                    b+=9;
                }
                else if(a[i][j]=='r'){
                    b+=5;
                }

                else if(a[i][j]=='b'){
                    b+=3;
                }

                else if(a[i][j]=='n'){
                    b+=3;
                }

                else if(a[i][j]=='p'){
                    b+=1;
                }

                else if(a[i][j]=='k'){
                    b+=0;
                }
            }
        }
    }

    if(w==b){

        cout<<"Draw"<<endl;

    }
    else if(w>b){

        cout<<"White"<<endl;

    }
    else{
        cout<<"Black"<<endl;
    }

}
