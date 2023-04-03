#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution{
    public:
    // vector Contains {BST, Size, Min, Max}
    vector<int> solve(Node* root){
        if(!root) return {1, 0, INT_MAX, INT_MIN}; /*Condition for nodes having 1 child*/
        if(!root->left && !root->right) return {1, 1, root->data, root->data}; /*Condition for leaf nodes*/
        vector<int> l = solve(root->left);
        vector<int> r = solve(root->right);
        if(l[0] && r[0]){           /*If left and right are both BST*/
            if(root->data > l[3] && root->data < r[2]){         /*If root->data > left[max] and < right[min]*/
                int x = l[2], y = r[3];
                if(x == INT_MAX) x = root->data;    /*Dealing with case in which*/ 
                if(y == INT_MIN) y = root->data;    /*node have only 1 child*/
                return {1, l[1]+r[1]+1, x, y};
            }
        }
        return {0, max(l[1], r[1]), 0, 0};  /*If left and right are not BST*/
    }
    
    int largestBst(Node *root)
    {
        vector<int> v = solve(root);
        return v[1];
    }
};

int main()
{

    return 0;
}