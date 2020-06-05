#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,j,c,m;
    cin>>n>>m;
    char a[n][m];
    set<char>s;
    set<char>::iterator itr;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
            s.insert(a[i][j]);
        }
    }
    int check=0;
    char ch;
    for(itr=s.begin();itr!=s.end();itr++){
        ch=*itr;
        if(ch!='W' && ch!='B' && ch!='G' ){
            check++;
            break;
        }
    }
    if(check==0){
        cout<<"#Black&White"<<endl;
    }
    else{
        cout<<"#Color"<<endl;
    }
}