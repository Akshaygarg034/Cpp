#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>> &res, int index){
        if(index == nums.size()) res.push_back(nums);
        for(int i=index; i<nums.size(); i++){
            swap(nums[i], nums[index]);
            solve(nums, res, index + 1);
            swap(nums[i], nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        solve(nums, res, 0);
        return res;
    }
};

int main(){
    
    return 0;
}