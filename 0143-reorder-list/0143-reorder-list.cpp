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
            Next = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = Next ;
        }
        return prev ;
    }
    void reorderList(ListNode* head) {
        ListNode* c = new ListNode(100) ;
        ListNode* tempC = c ;
        ListNode* a = head ;
        ListNode* tempA = a ;
        ListNode* slow = head ;
        ListNode* fast = head ;
        while(fast->next && fast->next->next){
            slow = slow->next ;
            fast = fast->next->next ;
        }
        ListNode* b = reverse(slow->next );
        ListNode* tempB = b ;
        slow->next = NULL ;
        while(tempA && tempB){
            tempC->next = tempA ;
            tempC = tempC->next ;
            tempA = tempA->next ;
            tempC->next = tempB ;
            tempC = tempC->next ;
            tempB = tempB->next ;
        }
        tempC->next = tempA ;
        head = c->next ;
    }
};