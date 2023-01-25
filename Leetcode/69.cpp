#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        long l = 1,h = x;
        while(l<=h){
            long mid = (l+h)/2;
            if((x/mid) == mid) return mid;
            else if(mid > (x/mid)){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return h;
    }
};

int main(){
    
    return 0;
}