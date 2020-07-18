
#include<bits/stdc++.h>
using namespace std;

int visited[1000000];
vector<int>adj[1000000];
void add_edge(int a,int b){

    adj[a].push_back(b);

}
void dfs(int s){


    stack<int>st;
    st.push(s);
    visited[s]=1;
    while(!st.empty()){

        int f=st.top();
        //cout<<f<<" ";
        st.pop();
        for(int i=0;i<adj[f].size();i++){
            if(visited[adj[f].at(i)]==0){
                st.push(adj[f].at(i));
                visited[adj[f].at(i)]=1;
            }
        }
    }

}


int main(){

    int n,e,i,b,j,t,d;
    cin>>n>>d;//n is number of nodes e is number of edges
    int a[n-1];
    for(i=0;i<n-1;i++){

        cin>>a[i];

    }
    for(i=0;i<n-1;i++){
        add_edge(i+1,i+1+a[i]);
    }
    dfs(1);
    if(visited[d]==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
