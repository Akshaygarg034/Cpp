#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        val = val;
        left = right = NULL;
    }
};

class Solution {
public:
    void solve(TreeNode* root, map<int, int> &mp){
        if(!root) return;
        solve(root->left, mp);
        mp[root->val]++;
        solve(root->right, mp);
    }
    vector<int> findMode(TreeNode* root) {
        map<int, int> mp;
        vector<int> v;
        int maxi = INT_MIN;
        solve(root, mp);
        for(auto it: mp){
            if(it.second > 1) maxi = max(maxi, it.second);
        }
        if(maxi != INT_MIN){
            for(auto it: mp){
                if(it.second == maxi) v.push_back(it.first);
            }
        }
        else{
            for(auto it: mp){
                v.push_back(it.first);
            }
        }
        return v;
    }
};

int main()
{

    return 0;
}