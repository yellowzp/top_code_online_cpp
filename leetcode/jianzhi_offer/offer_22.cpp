#include <iostream>
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
    ListNode *getKthFromEnd(ListNode *head, int k)
    {
        ListNode *first = head;
        ListNode *second = head;
        int c = 0;
        while (c < k)
        {
            second = second->next;
            c++;
        }
        while (second != NULL)
        {
            first = first->next;
            second = second->next;
        }
        return first;
    }
};