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
        bool init = false;
        int carrier = 0;
        
        ListNode* head = new ListNode();
        ListNode* cur = head;

        while(l1 || l2){
            int sum = carrier;
            if(l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            if(sum >= 10){
                sum = sum % 10;
                carrier = 1;
            }
            else{
                carrier = 0;
            }

            if(!init) {
                head->val = sum;
                init = true;
            }
            else{
                cur->next = new ListNode(sum);
                cur = cur->next;
            }
            
        }
        if(carrier > 0) cur->next = new ListNode(carrier);
        return head;
    }

};