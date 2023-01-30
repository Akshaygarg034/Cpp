#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum=0, req_sum = (n)*(n+1)/2;
        for(auto it :nums){
            sum += it;
        }
        return req_sum - sum;
    }
};

int main(){
    
    return 0;
}