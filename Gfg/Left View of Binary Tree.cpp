#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

vector<int> leftView(Node *root)
{
    queue<Node *> q;
    vector<int> ans;
    if (!root)
        return ans;
    q.push(root);
    while (!q.empty())
    {
        int sz = q.size();
        ans.push_back(q.front()->data);
        while (sz--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return ans;
}

int main()
{

    return 0;
}