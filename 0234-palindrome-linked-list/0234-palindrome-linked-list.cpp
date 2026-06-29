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
ListNode* fmiddle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode* reverse(ListNode* head){
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
public:
    bool isPalindrome(ListNode* head) {
        //single present
        if(head->next==NULL){
            return true;
        }
        //step1 find middle
        ListNode* middle=fmiddle(head);
        //step2 reverse 2nd half
        ListNode* temp=middle->next;
        middle->next=reverse(temp);

        //step 3 check
        ListNode* head1=head;
        ListNode* head2=middle->next;
        while(head2!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        //step 4 rearrange ll
         temp=middle->next;
        middle->next=reverse(temp);

        return true;
    }
};