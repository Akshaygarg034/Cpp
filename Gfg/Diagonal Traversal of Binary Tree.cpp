#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

vector<int> diagonal(Node *root)
{
   vector<int> ans;
   if(!root) return ans;
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       Node* temp = q.front();
       q.pop();
       while(temp){
           if(temp->left)q.push(temp->left);
           ans.push_back(temp->data);
           temp = temp->right;
       }
   }
   return ans;
}

int main()
{

    return 0;
}