#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 0;
        reverse(digits.begin(), digits.end());
        for (int i = 0; i < digits.size(); i++)
        {
            if (digits[i] == 9)
            {
                digits[i] = 0;
                carry = 1;
            }
            else
            {
                digits[i]++;
                carry = 0;
                break;
            }
        }
        if (carry == 1)
            digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};

int main()
{

    return 0;
}