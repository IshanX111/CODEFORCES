#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    set<char>s;
    string s1;
    cin>>x>>y;
    int i,j;
    int c=0;
    for(i=x;i<=y;i++){
        s1=to_string(i);

        for(j=0;j<s1.size();j++){
            s.insert(s1.at(j));
        }
        if(s.size()==s1.size()){
            c++;
            cout<<s1<<endl;

            break;
        }
        s.clear();

    }
    if(c==0){
        cout<<"-1"<<endl;
    }

}
