#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node * next;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
// Doing BFS and in each level firstly, pointer p is pointing to the first element of the level
// After that, through a loop that pointer is used to point "next" pointer to the other elements
// of that level and last element of the level points to NULL.
    Node* connect(Node* root) {
        if(!root) return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size()-1;
            Node* p = q.front();
            Node* temp = q.front();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            q.pop();

            while(sz--){
                p->next = q.front();
                p = p->next;
                Node* temp = q.front();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                q.pop();
            }

            p->next = NULL;
        }
        return root;
    }
};

int main()
{

    return 0;
}