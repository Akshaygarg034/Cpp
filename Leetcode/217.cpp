#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end())return true;
            mp[nums[i]]++;
        }
        return false;
    }
};

int main(){
    
    return 0;
}