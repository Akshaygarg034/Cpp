#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *p, *q;
        p = headA;
        q = headB;
        while (p != q)
        {
            if (!p)
                p = headB;
            else
                p = p->next;
            if (!q)
                q = headA;
            else
                q = q->next;
        }
        return p;
    }
};

int main()
{

    return 0;
}