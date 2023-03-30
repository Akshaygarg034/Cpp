#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode * next;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* solve(vector<int> nums, int l, int h){
        if(l > h) return NULL;
        if(l == h){
            return new TreeNode(nums[l]);
        }
        int mid = (l + h)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = solve(nums, l, mid-1);
        root->right = solve(nums, mid+1, h);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return solve(nums, 0, n-1);
    }
};

int main()
{
    
    return 0;
}
