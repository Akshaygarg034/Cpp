#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        for(int i=0; i<columnTitle.size(); i++){
            sum = sum * 26;
            sum += columnTitle[i] - 64;
        }
        return sum;
    }
};

int main(){
    
    return 0;
}