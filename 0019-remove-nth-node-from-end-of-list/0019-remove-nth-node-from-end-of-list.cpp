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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp = head;
        int count =0;
        while(temp!=NULL){
            temp = temp->next;
            count ++;

        }
        int pos = count - n+1;
         if(pos==1){
                ListNode*temp2 = head;
                head = head->next;
                delete temp2;
                return head;
            }
        temp=head;
        int count2 = 1;
        ListNode*prev = NULL;
        while(temp!=NULL){
            
            if(count2==pos){
                prev->next = temp->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
            count2++;
        }
        return head;
    }
};