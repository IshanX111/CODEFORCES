#include<bits/stdc++.h>
using namespace std;
int main(){

    char ch;
    string s,s1="";
    string s2="qwertyuiop",s3="asdfghjkl;",s4="zxcvbnm,./";
    cin>>ch>>s;
    if(ch=='L'){

        for(int i=0;i<s.size();i++){
            for(int k=0;k<s2.size();k++){
                if(s.at(i)==s2.at(k)){
                    s1+=s2.at(k+1);
                }
            }
            for(int k=0;k<s3.size();k++){
                if(s.at(i)==s3.at(k)){
                    s1+=s3.at(k+1);
                }
            }
             for(int k=0;k<s4.size();k++){
                if(s.at(i)==s4.at(k)){
                    s1+=s4.at(k+1);
                }
            }

        }

    }

    else if(ch=='R'){

        for(int i=0;i<s.size();i++){
            for(int k=0;k<s2.size();k++){
                if(s.at(i)==s2.at(k)){
                    s1+=s2.at(k-1);
                }
            }
            for(int k=0;k<s3.size();k++){
                if(s.at(i)==s3.at(k)){
                    s1+=s3.at(k-1);
                }
            }
             for(int k=0;k<s4.size();k++){
                if(s.at(i)==s4.at(k)){
                    s1+=s4.at(k-1);
                }
            }

        }

    }


    cout<<s1<<endl;


}
