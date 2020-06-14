#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
bool compare(const pair<int,int>&i,const pair<int,int>&j){
    return i.first<j.first;
}
 
 
int main(){
 
    vector<int>v,v1;
    vector< pair <int,int> > vect; 
    int s,t,x,y;
    cin>>s>>t;
    while(t--){
        cin>>x;
        v.push_back(x);
        cin>>y;
        v1.push_back(y);
 
    }
  
    for (int i=0; i<v.size(); i++) 
        vect.push_back( make_pair(v.at(i),v1.at(i))); 
    sort(vect.begin(),vect.end(),compare);
    
    int c=0;
   
    for (int i=0; i<v.size(); i++) 
    { 
        
            if(s<=vect[i].first){
                c++;
                break;
            }
            else{
 
                s=s+vect[i].second;
            }
    } 
    if(c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 
}