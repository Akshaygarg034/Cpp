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
    Node *inSuc(Node *root)
    {
        root = root->right;
        while (root->left)
            root = root->left;
        return root;
    }

    Node *deleteNode(Node *root, int x)
    {
        if (!root)
            return NULL;
        if (x < root->data)
        {
            root->left = deleteNode(root->left, x);
        }
        else if (x > root->data)
        {
            root->right = deleteNode(root->right, x);
        }
        else
        {
            // Leaf Node case also got covered in the "if(!root->right)" case. So a particular case for leaf nodes
            // is not required
            // if(!root->left || !root->right){
            //     delete(root);
            //     return NULL;
            // }
            if (!root->right)
            {
                Node *temp = root->left;
                delete (root);
                return temp;
            }
            else if (!root->left)
            {
                Node *temp = root->right;
                delete (root);
                return temp;
            }
            else
            {
                Node *temp = inSuc(root);
                swap(root->data, temp->data);
                root->right = deleteNode(root->right, x);
            }
        }
        return root;
    }
};

int main()
{
    return 0;
}
int main()
{

    return 0;
}
