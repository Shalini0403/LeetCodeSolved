/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    
    /*condition where list is empty or has one node or is the last node, then return as it is*/
      if (!head || !(head->next))
        return head;
    
     /* creating a temporary node to swap values and initialise with head*/
    struct ListNode* temp = head;
     /* swapping first pair */
    head = head->next;
    /* saving the node that will be pointed by prev prev node in temp*/
    temp->next = head->next;
    head->next = temp;
    /* recursively swapping all pairs with base condition is that next node and next to next node should not be null*/
    head->next->next = swapPairs(head->next->next);
    return head;

    }
};
