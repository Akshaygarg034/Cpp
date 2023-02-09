#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve("(", n, 1, 0, res);
        return res;
    }
    void solve(string s, int n, int o, int c, vector<string> &res){
        if(s.size() == 2*n){
            res.push_back(s);
            return;
        }
        if(o < n){
            solve(s + "(", n, o + 1, c, res);
        };
        if(c < o){
            solve(s + ")", n, o, c + 1, res);
        }
    }
};

int main(){
    
    return 0;
}