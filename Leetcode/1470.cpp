#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int n1=n;
        vector<int> res;
        for(int i=0; i<n; i++){
            res.push_back(nums[i]);
            res.push_back(nums[n1]);
            n1++;
        }
        return res;
    }
};

int main(){
    
    return 0;
}