#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;
        for(auto it : s){
            mp[it]++;
        }
        for(auto it : t){
            if(mp.find(it) == mp.end()) return false;
            mp[it]--;
            if(mp[it] == 0) mp.erase(it);
        }
        if(mp.empty())return true;
        else return false;
    }
};

int main(){
    
    return 0;
}