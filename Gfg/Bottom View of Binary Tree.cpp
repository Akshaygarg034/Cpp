#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        if(!root) return ans;
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            Node* temp = q.front().first;
            int h = q.front().second;
            q.pop();
            mp[h] = temp->data;
            if(temp->left)q.push({temp->left, h-1});
            if(temp->right)q.push({temp->right, h+1});
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