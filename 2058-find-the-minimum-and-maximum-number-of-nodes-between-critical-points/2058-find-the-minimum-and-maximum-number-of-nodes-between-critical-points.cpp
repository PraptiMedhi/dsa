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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int count=1 ;
         int mini=INT_MAX;
        int maxi=0;
        vector<int>dis;
        ListNode *cur=head;
        ListNode *prev=NULL;
        while(cur!=NULL){
            if(cur!=head && cur->next!=NULL){
                if((cur->val>prev->val && cur->val>cur->next->val) || (cur->val<prev->val && cur->val<cur->next->val)){
                    dis.push_back(count);
                }
            }
            prev=cur;
            cur=cur->next;
            count++;
        }
       if(dis.size()<2){
          return {-1,-1};
       }
       else{
       
        for(int i=1;i<dis.size();i++){
            int d=dis[i]-dis[i-1];
            mini=min(mini,d);
        }
        maxi=dis[dis.size()-1]-dis[0];
       }
       return {mini,maxi};
    }
};