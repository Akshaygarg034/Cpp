#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void swap(char &a, char &b){
        char temp = a;
        a = b;
        b= temp;
    }
    int reverseBits(uint32_t n) {
        long sum=0;
        string s = bitset<32>(n).to_string();
        reverse(s.begin(), s.end());
        for(int i=s.size()-1, j=0; i>=0; i--, j++){
            if(s[i]=='1') sum += pow(2,j);
        }
        return sum;
    }
};

int main(){
    
    return 0;
}