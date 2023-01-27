#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
       if(n <= 1) return n;
       int s=0, t0 = 0, t1 = 1;
       for(int i=2; i<=n; i++){
           s = t0 + t1;
           t0 = t1;
           t1 = s;
       }
       s = t0 + t1;
       return s;
    }
};

int main(){
    
    return 0;
}