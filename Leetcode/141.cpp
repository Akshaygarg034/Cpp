#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL)
            return false;
        ListNode *p, *q;
        p = head;
        q = p;
        do
        {
            p = p->next;
            q = q->next;
            if (q)
                q = q->next;
        } while (p && q && p != q);

        if (p == q && p && q)
            return true;
        else
            return false;
    }
};

int main()
{

    return 0;
}