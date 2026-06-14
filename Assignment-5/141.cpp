#include <iostream>
#include <map>
using namespace std;
// Definition for singly-linked list.
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
    bool hasCycle(ListNode *head)
    {
        map<ListNode *, bool> vis;
        ListNode *temp = head;
        while (temp != NULL)
        {
            if (vis[temp] == true)
                return true;
            vis[temp] = true;
            temp = temp->next;
        }
        return false;
    }
};