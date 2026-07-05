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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
       vector<int>v(2);
       int count=0;
      
       while(temp!=NULL){
        count++;
        temp=temp->next;
       }
       temp=head;
       int check=0;
       while(temp!=NULL){
        check++;
        if(check==k){
            v[0]=temp->val;
        }
        if(check==count-k+1){
            v[1]=temp->val;
        }
        temp=temp->next;
       }
       check=0;
       temp=head;
        while(temp!=NULL){
        check++;
        if(check==k){
            temp->val=v[1];
        }
        if(check==count-k+1){
            temp->val=v[0];
        }
        temp=temp->next;
       }
       return head;
    }
};