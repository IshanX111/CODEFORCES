#include<bits/stdc++.h>
using namespace std;
int main(){

    char ch;
    string s,s1="";
    cin>>ch>>s;
    if(ch=='R'){
        for(int i=0;i<s.size();i++){
            if(s.at(i)=='w'){
                s1+='q';
            }
            else if(s.at(i)=='e'){
                s1+='w';
            }
            
            else if(s.at(i)=='r'){
                s1+='e';
            }
            else if(s.at(i)=='t'){
                s1+='r';
            }
            
            else if(s.at(i)=='y'){
                s1+='t';
            }
            
            else if(s.at(i)=='u'){
                s1+='y';
            }
            
            else if(s.at(i)=='i'){
                s1+='u';
            }
            else if(s.at(i)=='o'){
                s1+='i';
            }
            
            else if(s.at(i)=='p'){
                s1+='o';
            }
            ///2nd row
            else if(s.at(i)=='s'){
                s1+='a';
            }
            
            else if(s.at(i)=='d'){
                s1+='s';
            }
            
            else if(s.at(i)=='f'){
                s1+='d';
            }
            
            else if(s.at(i)=='g'){
                s1+='f';
            }
            else if(s.at(i)=='h'){
                s1+='g';
            }
            
            else if(s.at(i)=='j'){
                s1+='h';
            }
            else if(s.at(i)=='k'){
                s1+='j';
            }
            
            else if(s.at(i)=='l'){
                s1+='k';
            }
            
            else if(s.at(i)==';'){
                s1+='l';
            }
            ///thirdrow
            else if(s.at(i)=='x'){
                s1+='z';
            }
            
            else if(s.at(i)=='c'){
                s1+='x';
            }
            else if(s.at(i)=='v'){
                s1+='c';
            }
            
            else if(s.at(i)=='b'){
                s1+='v';
            }
            else if(s.at(i)=='n'){
                s1+='b';
            }
            
            else if(s.at(i)=='m'){
                s1+='n';
            }
            
            else if(s.at(i)==','){
                s1+='m';
            }
            else if(s.at(i)=='.'){
                s1+=',';

            }
            
            else if(s.at(i)=='/'){
                s1+='.';

            }
            

        }

    }
    else if(ch=='L'){
        for(int i=0;i<s.size();i++){
            if(s.at(i)=='q'){
                s1+='w';
            }
            else if(s.at(i)=='w'){
                s1+='e';
            }
            
            else if(s.at(i)=='e'){
                s1+='r';
            }
            else if(s.at(i)=='r'){
                s1+='t';
            }
            
            else if(s.at(i)=='t'){
                s1+='y';
            }
            
            else if(s.at(i)=='y'){
                s1+='u';
            }
            
            else if(s.at(i)=='u'){
                s1+='i';
            }
            else if(s.at(i)=='i'){
                s1+='o';
            }
            
            else if(s.at(i)=='o'){
                s1+='p';
            }
            ///2nd row
            else if(s.at(i)=='a'){
                s1+='s';
            }
            
            else if(s.at(i)=='s'){
                s1+='d';
            }
            
            else if(s.at(i)=='d'){
                s1+='f';
            }
            
            else if(s.at(i)=='f'){
                s1+='g';
            }
            else if(s.at(i)=='g'){
                s1+='h';
            }
            
            else if(s.at(i)=='h'){
                s1+='j';
            }
            else if(s.at(i)=='j'){
                s1+='k';
            }
            
            else if(s.at(i)=='k'){
                s1+='l';
            }
            
            else if(s.at(i)=='l'){
                s1+=';';
            }
            ///thirdrow
            else if(s.at(i)=='z'){
                s1+='x';
            }
            
            else if(s.at(i)=='x'){
                s1+='c';
            }
            else if(s.at(i)=='c'){
                s1+='v';
            }
            
            else if(s.at(i)=='v'){
                s1+='b';
            }
            else if(s.at(i)=='b'){
                s1+='n';
            }
            
            else if(s.at(i)=='n'){
                s1+='m';
            }
            
            else if(s.at(i)=='m'){
                s1+=',';
            }
            else if(s.at(i)==','){
                s1+='.';

            }
            
            else if(s.at(i)=='.'){
                s1+='/';

            }
            

        }

    }



    cout<<s1<<endl;




}