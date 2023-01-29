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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *p, *q, *res, *r;
        res = new ListNode();
        r = res;
        p = l1, q = l2;
        int carry = 0;
        while (p || q || carry)
        {
            int sum = 0;
            if (p)
            {
                sum += p->val;
                p = p->next;
            }
            if (q)
            {
                sum += q->val;
                q = q->next;
            }
            sum = sum + carry;
            carry = sum / 10;
            ListNode *temp = new ListNode(sum % 10);
            r->next = temp;
            r = r->next;
        }
        return res->next;
    }
};

int main()
{

    return 0;
}
