#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
    int l=0, mid=0, h=nums.size()-1;
        while(mid <= h){
            switch(nums[mid]){
                case 0:
                    swap(nums[mid], nums[l]);
                    mid++;
                    l++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid], nums[h]);
                    h--;
                    break;
            }
        }
    }
};

int main(){
    
    return 0;
}