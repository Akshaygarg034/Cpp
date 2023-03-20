#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        queue<pair<Node*, int>> q;
        map<int, int> mp;
        if(!root) return ans;
        q.push({root, 0});
        while(!q.empty()){
            Node* temp = q.front().first;
            int h = q.front().second;
            q.pop();
            if(!mp[h]) mp[h] = temp->data;
            if(temp->left) q.push({temp->left, h-1});
            if(temp->right) q.push({temp->right, h+1});
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }

};

int main()
{

    return 0;
}