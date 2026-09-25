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
    //ListNode* curr = new ListNode(0) ;
    ListNode*  Swap(ListNode* root){
    if(root==NULL || root->next==NULL) return root ;
     ListNode* first = root->next ;
     ListNode* second = root ;
     ListNode* third = root->next->next ;
     first->next = second ;
     second->next = Swap(third) ;
     return first ;
    } 
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head ; 
        head = Swap(temp) ;
        return head ;
    }
};