#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string res = s[0];
        int ans = s[0].size();
        for(int i=1; i<s.size(); i++){
            int j=0;
            while(j<s[i].size() && s[i][j] == s[0][j])j++;
            ans = min(ans, j);
        }
        return res.substr(0, ans);
    }
};

int main(){
   
    return 0;
}
