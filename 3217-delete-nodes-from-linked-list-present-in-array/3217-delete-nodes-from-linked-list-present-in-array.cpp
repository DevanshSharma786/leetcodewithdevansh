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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==NULL) return head ;
        if(nums.size()==0) return head ;
    unordered_set<int> s;
    int i = 0;
    while(i<nums.size()){
        s.insert(nums[i]);
        i++ ;
    }
    while(head!=NULL){
        if(s.find(head->val)!=s.end()){
            head = head->next ;
        }
        else{
            break ;
        }
    }
    ListNode* temp = head ; 
    while(temp!=NULL && temp->next!=NULL){
        if(s.find(temp->next->val)!=s.end()){
            temp->next = temp->next->next ;
        }
        else{
            temp=temp->next ;
        }
    }
    return head ; 
    } 
};