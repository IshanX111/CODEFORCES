#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,b,c,d,e,x,l;
    std::set<int>s;
    std::set<int>::iterator it;
    cin>>n;
    n=n+1;
        for(;;){

        x=n;
        b=x%10;
        x=x/10;
        c=x%10;
        x=x/10;
        d=x%10;
        x=x/10;
        e=x%10;
        s.insert(b);
        s.insert(c);
        s.insert(d);
        s.insert(e);
        l=s.size();
        if(l==4){
            cout<<n<<endl;
            break;
        }
        else{
            n=n+1;
        }


        s.clear();


        /*for(it=s.begin();it!=s.end();it++){
            cout<<*it<<endl;
        }*/


        }


}
