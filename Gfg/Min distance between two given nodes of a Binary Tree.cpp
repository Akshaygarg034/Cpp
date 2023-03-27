#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* lca(Node* root, int a, int b){
        if(!root) return NULL;
        if(root->data == a || root->data == b) return root;
        Node* l = lca(root->left, a, b);
        Node* r = lca(root->right, a ,b);
        if(l && r)return root;
        if(l)return l;
        else return r;
    }
    
    int solve(Node* root, int val){
        if(!root) return 0;
        if(root->data == val) return 1;
        int x = solve(root->left, val);
        int y = solve(root->right, val);
        // In case of finding distance b/w lca and 2, 3 is also returning 0+0+1, which is
        // not needed. Thus next line is for ensuring this case
        if(!x && !y)return 0;
        return x + y + 1;
    }
    int findDist(Node* root, int a, int b) {
        Node* LCA = lca(root, a, b);
        int x = solve(LCA, a);
        int y = solve(LCA, b);
        return x + y - 2;
    }
};
int main()
{

    return 0;
}