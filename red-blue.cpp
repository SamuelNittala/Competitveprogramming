#include<bits/stdc++.h>
#include<iostream>

using namespace std;

vector< vector< pair<int,char> > > graph(4);

void insert(int u,int v,char c){
    graph[u].push_back(pair<int,char>(v,c));
}
int shortpath(int u,int v){
    vector< pair<int,char> > tmp = graph[u];

    list<int> queue;
    vector<bool> visited;
    vector<int> dist;

    for(int i=0;i<tmp.size();++i){
        visited[i] = false;
        dist[i] = INT_MAX;
    }
    visited[u] = true;
    dist[u] = 0;
    queue.push_back(u);

    while(!queue.empty()){
        int t = queue.front();
        for(int i=0;i<graph[t].size();++i){
            pair<int,char> p = graph[t][i];
            char color = p.second;
            
        }
    }
}
int main(){
    insert(0,1,'r');
    insert(0,2,'b');
    insert(1,2,'r');

    for(auto i : graph){
        for(auto j : i) cout << j.first << j.second << " ";
        cout << '\n';
    }
}