#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j,c,x,y;
    int a[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]==1){
                x=i;
                y=j;
                break;
            }
        }
    }

    c=0;
    while(x!=2){
        if(x<2){
            x++;
            c++;
        }
        else if(x>2){
            x--;
            c++;
        }
    }
    while(y!=2){
        if(y<2){
            y++;
            c++;
        }
        else if(y>2){
            y--;
            c++;
        }
    }

    cout<<c<<endl;




}
