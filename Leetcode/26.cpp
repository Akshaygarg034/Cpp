#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[p] != nums[i]){
                nums[p+1] = nums[i];
                p++;
            }
        }
        return p+1;
    }
};

int main(){
    
    return 0;
}