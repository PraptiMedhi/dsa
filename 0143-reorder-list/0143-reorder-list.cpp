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
    private:
    ListNode* reverse(ListNode* &head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
ListNode* middle(ListNode* head){
       ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
}
public:
    void reorderList(ListNode* head) {
        ListNode* mid=middle(head);
        ListNode* second=mid->next;
        mid->next=NULL;
        ListNode* first=head;
        second=reverse(second);
        while(second!=NULL){
             ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
        
    }
};