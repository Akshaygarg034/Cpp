#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int a, b, c = 0;
    bool isValid(string s)
    {
        stack<char> st;
        st.push('a');
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == ')' && st.top() == '(')
                st.pop();
            else if (s[i] == '}' && st.top() == '{')
                st.pop();
            else if (s[i] == ']' && st.top() == '[')
                st.pop();
            else
                st.push(s[i]);
        }
        return st.top() == 'a';
    }
};

int main()
{

    return 0;
}