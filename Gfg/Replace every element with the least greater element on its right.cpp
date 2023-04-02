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
    Node* insert(Node* root, int data, Node* &succ){
        if(!root) return new Node(data);
        if(data < root->data){
            succ = root;
            root->left = insert(root->left, data, succ);
        }
        else {
            root->right = insert(root->right, data, succ);
        }
        return root;
    }
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        Node* root = NULL;
        for(int i=arr.size()-1; i>=0; i--){
            Node* succ = NULL;
            root = insert(root, arr[i], succ);
            if(succ) arr[i] = succ->data;
            else arr[i] = -1;
        }
        return arr;
    }
};

int main()
{

    return 0;
}