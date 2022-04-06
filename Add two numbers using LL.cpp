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
 
 /**
 My approach here is to keep adding the digits of node starting from beginning of linked list(which actually is end of the numbers).
 And also keep track of carry using carry variable.Then append the added digit in new node by creating a new node every time using new operator and making the previous node
 point to the next node.And only append single digit in the node of new ll by taking mod 10 of each sum of two nodes.
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode prehead(0),*p=&prehead;
        int carry=0;
        while(l1 || l2 || carry)
        {
            int sum=(l1?l1->val:0) + (l2?l2->val:0) + carry;
            carry=sum/10;
            p->next=new ListNode(sum%10);
            p=p->next;
            l1=l1?l1->next:l1;
            l2=l2?l2->next:l2;
        }
        return prehead.next;
       
    }
};
