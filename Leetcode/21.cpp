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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *p, *q;
        if (list1 == NULL)
            return list2;
        else if (list2 == NULL)
            return list1;

        if (list1->val < list2->val)
        {
            p = q = list1;
            list1 = list1->next;
        }
        else
        {
            p = q = list2;
            list2 = list2->next;
        }
        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                p->next = list1;
                p = p->next;
                list1 = list1->next;
                p->next = NULL;
            }
            else
            {
                p->next = list2;
                p = p->next;
                list2 = list2->next;
                p->next = NULL;
            }
        }
        if (list1)
            p->next = list1;
        else
            p->next = list2;
        return q;
    }
};

int main()
{

    return 0;
}