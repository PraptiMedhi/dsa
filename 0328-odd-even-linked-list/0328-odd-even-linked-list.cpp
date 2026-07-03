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
    ListNode* oddEvenList(ListNode* head) {
       ListNode* oddDummy = new ListNode(-1);
ListNode* evenDummy = new ListNode(-1);

ListNode* odd = oddDummy;
ListNode* even = evenDummy;

int cnt = 1;
ListNode* temp = head;

while(temp){
    ListNode* nxt = temp->next;

    if(cnt % 2){
        odd->next = temp;
        odd = odd->next;
    }
    else{
        even->next = temp;
        even = even->next;
    }

    temp->next = NULL;
    temp = nxt;
    cnt++;
}

odd->next = evenDummy->next;

return oddDummy->next;

    }
};