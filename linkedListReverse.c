/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        
        ListNode*prev = NULL;
        ListNode*cur = head;
        ListNode*Next = head;
        while(cur!=NULL){
            Next = cur->next;
            cur->next=prev;
            prev = cur;
            cur=Next;
            
        }
        return prev;
        
    }
};