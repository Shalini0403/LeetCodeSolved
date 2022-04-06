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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        /*creating this list to store my answer */
        ListNode* myAns= new ListNode(0);
        /*this pointer will point to current node*/
        ListNode* p=myAns;
        int carry =0;
        
        while(l1 != NULL || l2!= NULL || carry==1 )
        {
            int ans=0;
            if(l1!=NULL)
            {
                ans+=l1->val;
                l1=l1->next;
            }
             if(l2!=NULL)
            {
                ans+=l2->val;
                l2=l2->next;
            }
            ans+=carry;
            carry=ans/10;
            /*creating new node to hold the new digit of answer*/
            ListNode *n1 = new ListNode(ans % 10);
            p->next = n1;
            p = p->next;
        }
        return myAns->next;
        
    }
};
