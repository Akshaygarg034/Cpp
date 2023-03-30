#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       vector<string> v;
       for(int i=0; i<nums.size(); ){
            string s;
            s += to_string(nums[i]);
            int j = i;
            while(j+1 < nums.size() && nums[j]+1 == nums[j+1]) j++;
            if(i < j){
                s += "->";
                s += to_string(nums[j]);
            }
            v.push_back(s);
            i = j + 1;
       }
       return v; 
    }
};

int main(){
    
    return 0;
}