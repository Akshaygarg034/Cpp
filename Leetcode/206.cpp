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
    ListNode *reverseList(ListNode *p)
    {
        if (p == NULL)
            return NULL;
        ListNode *q = NULL, *r = NULL;
        while (p)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        return q;
    }
};

int main()
{

    return 0;
}