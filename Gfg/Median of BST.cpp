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

    // Firstly do a traversal to find no. of elements i.e n. After that if n is odd, then value of (n/2)+1 th
    // element will be Median, otherwise (value of n/2 th element + value of (n/2)+1 th element)/2 will be the
    // Median.

    int n = 0;
    int cnt = 1;
    float ans = 0;
    void size(Node *root)
    {
        if (!root)
            return;
        size(root->left);
        n++;
        size(root->right);
    }

    void solve(Node *root, int k, Node *&prev)
    {
        if (!root)
            return;
        solve(root->left, k, prev);
        if (cnt == k)
        {
            if (n & 1)
            {
                ans = (root->data) * 1.0;
                cnt++;
                return;
            }
            ans = ((prev->data + root->data) * 1.0 / 2);
            cnt++;
            return;
        }
        prev = root;
        cnt++;
        solve(root->right, k, prev);
    }

    float findMedian(struct Node *root)
    {
        n = 0;
        cnt = 1;
        ans = 0;
        size(root);
        int k = (n / 2) + 1;
        Node *prev = NULL;
        solve(root, k, prev);
        return ans;
    }
};

int main()
{

    return 0;
}