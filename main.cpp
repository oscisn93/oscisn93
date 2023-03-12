#include <iostream>

typedef struct ListNode
{
    int val;
    ListNode *next;
} node;

int main()
{
    node *head;
    head->val = 0;
    head->next = nullptr;

    node **cur;
    cur = &head;
    (*cur)->val = 1;

    std::cout << "Value: " << head->val << "\n";
    return 0;
}