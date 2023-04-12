#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    vector<string> v;
    public:
    void solve(int i, int j, vector<vector<int>> m, vector<vector<int>> vis, int n , string s){
        if(i < 0 || j < 0 || i >= n || j >= n) return;
        if(vis[i][j] == 1 || m[i][j] == 0) return;
        if(i == n-1 && j == n-1){
             v.push_back(s);
             return;
        }
        
        vis[i][j] = 1;
        solve(i-1, j, m, vis, n, s + "U");
        solve(i+1, j, m, vis, n, s + "D");
        solve(i, j-1, m, vis, n, s + "L");
        solve(i, j+1, m, vis, n, s + "R");
        vis[i][j] = 0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        v.clear();
        if(m[0][0] == 0 || m[n-1][n-1] == 0) return v;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        string s;
        solve(0, 0, m, vis, n, s);
        sort(v.begin(), v.end());
        return v;
    }
};

int main(){
    
    return 0;
}