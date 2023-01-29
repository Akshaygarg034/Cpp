#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int value = 0;
        for(int it : nums){
            if(it == value)
                count++;
            else if(count == 0){
                value = it;
                count++;
            }
            else
                count--;
        }
        return value;
    }
};

int main(){
    
    return 0;
}