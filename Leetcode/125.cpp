#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i=0; i < s.size(); i++){
            if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))
            {  
               continue;
            }
            else{
                s.erase(i,1);
                i--;
            }
        }
        int j=0, k = s.size()-1;
        while(j < k){
            if(s[j] != s[k]) return false;
            j++; k--;
        }
        return true;
    }
};

int main(){
    
    return 0;
}