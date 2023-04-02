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
    bool search(Node *root, int key)
    {
        if (!root)
            return 0;
        if (key == root->data)
            return 1;
        else
        {
            if (key < root->data)
                return search(root->left, key);
            else
                return search(root->right, key);
        }
    }
    void solve(Node *root1, Node *root2, int x, int &cnt)
    {
        if (!root1)
            return;
        solve(root1->left, root2, x, cnt);
        if (search(root2, x - root1->data))
            cnt++;
        solve(root1->right, root2, x, cnt);
    }
    int countPairs(Node *root1, Node *root2, int x)
    {
        int cnt = 0;
        solve(root1, root2, x, cnt);
        return cnt;
    }
};

int main()
{
    return 0;
}
