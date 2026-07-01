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
    ListNode* deletenode(ListNode* &head,ListNode* hey){
        if(head==hey){
            head=head->next;
            return head;
        }
        ListNode* temp=head;
        while(temp->next!=hey){
            temp=temp->next;
        }
        ListNode* todelete=hey;
        temp->next=hey->next;
        hey->next=NULL;
        delete todelete;
        return head;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int check=0;
        temp=head;
        while(temp!=NULL){
            check++;
            if(check==count-n+1){
                deletenode(head,temp);
                break;
            }
            else{temp=temp->next;}

            }
        return head;
    }
};