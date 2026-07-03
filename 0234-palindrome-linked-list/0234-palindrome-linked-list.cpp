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
    bool isPalindrome(ListNode* head) {

        ListNode*slow = head;
        ListNode*fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast= fast->next->next;
        }
        ListNode*mid = slow;
        ListNode*prev=NULL;
        while(mid!=NULL){
            ListNode*temp2 = mid->next;
            mid->next=prev;
            prev = mid;
            mid=temp2;
            
        }
        ListNode* temp=head;
        while(temp!=NULL  && prev!=NULL){
            if(temp->val != prev->val){
                return false;
            }
            temp=temp->next;
            prev=prev->next;
        }
        return true;
    }
};