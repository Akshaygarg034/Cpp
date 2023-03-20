#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

vector<int> zigZagTraversal(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    queue<Node *> q;
    q.push(root);
    int x = -1;
    while (!q.empty())
    {
        x++;
        vector<int> sub_ans;
        int sz = q.size();
        while (sz--)
        {
            Node *temp = q.front();
            q.pop();
            sub_ans.push_back(temp->data);
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        if (x % 2 != 0)
        {
            reverse(sub_ans.begin(), sub_ans.end());
        }
        for (auto it : sub_ans)
        {
            ans.push_back(it);
        }
    }
    return ans;
}

int main()
{

    return 0;
}