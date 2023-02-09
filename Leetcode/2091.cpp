#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int min_i=0, max_i=0;
        int n = nums.size();
        for(int i=0; i < n; i++){
            if(nums[i] < mini){
                mini = nums[i];
                min_i = i;
            }
            if(nums[i] > maxi){
                maxi = nums[i];
                max_i = i;
            } 
        }
        int i = min(min_i, max_i);
        int j = max(min_i, max_i);
        return min(j+1, min(n-i, i+1+n-j));
    }
    
};


int main(){
    
    return 0;
}