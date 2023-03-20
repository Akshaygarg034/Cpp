#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Solution
{
    public:
    int solve(Node* root, int &f){
        if(!root) return 0;
        if(!root->left and !root->right) return root->data;
        if(f==0) return 0;
        int x = solve(root->left, f);
        int y = solve(root->right, f);
        if(root->data != x + y) f=0;
        return (x + y + root->data);
    }
    bool isSumTree(Node* root)
    {
         int f=1;
         solve(root, f);
         return f;
    }
};

int main()
{

    return 0;
}