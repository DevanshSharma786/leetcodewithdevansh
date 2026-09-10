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
ListNode* reverse(ListNode* root){
    ListNode* prev = NULL ;
    ListNode* nxt = NULL ;
    ListNode* curr = root ;
    while(curr){
        nxt = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = nxt ;
    } 
    return prev ;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL) return new ListNode(0) ;
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy ;
        int carry = 0 ;
        while(l1 !=NULL || l2!=NULL || carry >0){
            int sum = carry ;
            if(l1!=NULL){
                sum = sum + l1->val ;
                l1 = l1->next ;
            }
            if(l2!=NULL){
                sum = sum + l2->val ;
                l2 = l2->next ;
            }
            carry = sum/10 ;
            current->next = new ListNode(sum%10) ;
            current = current->next ;
        }
        ListNode* c = reverse(dummy->next) ;
        return c ;
    }
};