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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *p, *q;
        p = q = head;
        int m = 0;
        while (p)
        {
            m++;
            p = p->next;
        }
        p = head;
        if (m - n + 1 == 1)
        {
            head = head->next;
            return head;
        }
        else
        {
            for (int i = 0; i < (m - n); i++)
            {
                q = p;
                p = p->next;
            }
            q->next = p->next;
            p->next = NULL;
            return head;
        }
        return head;
    }
};

int main()
{
    return 0;
}