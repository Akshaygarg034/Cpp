#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    void moveZeroes(vector<int>& nums) {
        int i=0, j=0;
        for(int i=0, j=0; j<nums.size(); j++){
            if(nums[j] != 0) swap(nums[i++], nums[j]);
        }
    }
};

int main(){
    
    return 0;
}