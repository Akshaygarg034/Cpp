#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int merge(vector<int> &nums, int low, int mid, int high){
        int total=0;
        int j = mid+1;
        for(int i=low; i<=mid; i++){
            while(j <= high && nums[i] > 2LL * nums[j]){
                j++;
            }
            total += (j-(mid+1));
        }
        vector<int> temp;
        int left = low, right = mid+1;
        while(left <= mid && right <= high){
            if(nums[left] < nums[right])
                temp.push_back(nums[left++]);
            else
                temp.push_back(nums[right++]);
        }
        while(left <= mid)
            temp.push_back(nums[left++]);
        
        while(right <= high)
            temp.push_back(nums[right++]);
        
        for(int i=low; i<=high; i++){
            nums[i] = temp[i - low];
        }
        return total;
    }
    
    int mergesort(vector<int> &nums, int low, int high){
        if(low >= high)
            return 0;
        int mid = (low + high)/2;
        int val = mergesort(nums, low, mid);
        val += mergesort(nums, mid+1, high);
        val += merge(nums, low, mid, high);
        return val;
    }
    
    int reversePairs(vector<int>& nums) {
        return mergesort(nums, 0, nums.size()-1);
    }
};

int main(){
    
    return 0;
}