#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<int> g[], int elem, vector<int> &vis){
        vis[elem] = 1;
        for(auto it: g[elem]){
            if(!vis[it]){
                dfs(g, it, vis); 
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1) return -1;
        vector<int> g[n];
        for(int i=0; i<connections.size(); i++){
            g[connections[i][0]].push_back(connections[i][1]);
            g[connections[i][1]].push_back(connections[i][0]);
        }
        vector<int> vis(n, 0);
        int c=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                c++;
                dfs(g, i, vis);
            }
        }
        return c-1;
    }
};

int main(){
    
    return 0;
}
