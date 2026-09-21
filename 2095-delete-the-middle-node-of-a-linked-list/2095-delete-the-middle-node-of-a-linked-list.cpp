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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL ;
        ListNode* temp = head ;
        int count = 0;
        while(temp!=NULL){
            count++ ;
            temp = temp->next ;
        }
        int mid = count/2 ;
        temp = head ;
        while(temp!=NULL){
            if(mid==1){
                temp->next = temp->next->next ;
                 //temp->next->val = temp->next->next->val ;
                 mid--;
            }
            mid--;
            temp = temp->next ;
        }
        return head ;
    }
};