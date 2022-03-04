#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];//one-indexed based graph
    //vector<pair<int,int>> adj[n+1] //in case of weighted graph
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[u].push_back({v,wt}); //in case of weighted graph
        adj[v].push_back(u);//comment this line in case of directed graph
    }
    return 0;
}