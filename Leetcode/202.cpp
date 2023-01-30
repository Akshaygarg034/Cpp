#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        map<int, int> mp;
        int sum = 0;
        while(n != 1){
            string s = to_string(n);
            sum = 0;
            for(int i=0; i<s.size(); i++){
                sum += (s[i]-'0') * (s[i]-'0');
            }
            n = sum;
           if(mp.find(sum) != mp.end())return false;
           mp[n]++;
        }
        return true;
    }
};

int main(){
    
    return 0;
}