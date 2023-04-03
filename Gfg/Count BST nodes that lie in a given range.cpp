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
    void solve(Node* root, int l, int h, int &cnt){
        if(!root) return;
        if(root->data >= l && root->data <= h){
            cnt++;
            solve(root->left, l, h, cnt);
            solve(root->right, l, h, cnt);
        }
        else if(root->data < l) solve(root->right, l, h, cnt);
        else solve(root->left, l, h, cnt);
    }
    int getCount(Node *root, int l, int h)
    {
      int cnt=0;
      solve(root, l, h, cnt);
      return cnt;
    }
};

int main()
{

    return 0;
}