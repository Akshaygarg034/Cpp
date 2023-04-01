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

class Solution
{
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    void inorder(Node* root, vector<int> &v){
        if(!root)return;
        inorder(root-> left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int> v, v1, v2;
       inorder(root1, v1);
       inorder(root2, v2);
       int i=0, j=0;
       while(i < v1.size() && j < v2.size()){
           if(v1[i] < v2[j]) v.push_back(v1[i++]);
           else v.push_back(v2[j++]);
       }
       while(i < v1.size()) v.push_back(v1[i++]);
       while(j < v2.size()) v.push_back(v2[j++]);
       return v;
    }
};

int main()
{

    return 0;
}