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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL ;
        ListNode* Next = NULL ;
        ListNode* curr = head ;
        while(curr){
            Next = curr -> next ;
            curr->next = prev ;
            prev = curr ;
            curr = Next ;
        }
        return prev ;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* c = new ListNode(100);
        ListNode* tempC = c ;
        ListNode* temp = head ;
        while(temp){
            ListNode* node = new ListNode(temp->val);
            tempC->next = node ;
            tempC = tempC->next ;
            temp = temp->next ;
        }
        c = c->next ;
        ListNode* a = reverse(c);
        ListNode* b = head;
        while(a){
            if(a->val != b->val) return false ;
            a = a->next ;
            b = b->next ;
        }
        return true ;
    }
};