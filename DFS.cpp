#include<bits/stdc++.h>
using namespace std;
void Dfs(vector<vector<int>>&adj, vector<bool>&visited, int start){
    visited[start]==true;
    cout<< start <<" ";
    for(auto &i : adj[start]){
        if(visited[i]==false){
            Dfs(adj, visited, i);
        }
    }
}
void DfsInitialize(vector<vector<int>>&adj, int start){
    vector<bool> visited(adj.size(), false);
    Dfs(adj, visited, start);
}
void EdgeAdd(vector<vector<int>>&adj, int start, int end){
    adj[start].push_back(end);
    adj[end].push_back(start);
}
int main(){
    int v=4;
    vector<vector<int>> adj(v);
    vector<vector<int>> edges={{1,2},{1,0},{2,0},{2,3}};
    for(auto &e : edges){
        EdgeAdd(adj, e[0], e[1]);
    }
    int start=1;
    cout<<"Dfs from source : "<<start<<endl;
    DfsInitialize(adj, start);
}