#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> elem(4,0);
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            long long target_1 = target - nums[i];
            
            for(int j=i+1; j < n; j++){
                long long target_2 = target_1 - nums[j];
                int front = j+1, last = n-1;
                
                while(front < last){
                    
                    int sum = nums[front] + nums[last];
                    if(sum < target_2)
                        front++;
                    else if(sum > target_2)
                        last--;
                    else{
                        elem[0] = nums[i];
                        elem[1] = nums[j];
                        elem[2] = nums[front];
                        elem[3] = nums[last];
                        res.push_back(elem);
                        
                        while(front < last && nums[front] == elem[2])++front;
                        
                        while(last > front && nums[last] == elem[3])--last;
                    }
                }
                
                while(j+1 < n && nums[j] == nums[j+1])++j;
            }
            
            while(i+1 < n && nums[i] == nums[i+1])++i;
        }
        return res;
    }
};

int main(){
    
    return 0;
}