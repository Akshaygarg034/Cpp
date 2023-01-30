#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *p = head;
        vector<int> v;
        while (p)
        {
            v.push_back(p->val);
            p = p->next;
        }
        for (int i = 0, j = v.size() - 1; i < j; i++, j--)
        {
            if (v[i] != v[j])
                return false;
        }
        return true;
    }
};

int main()
{

    return 0;
}