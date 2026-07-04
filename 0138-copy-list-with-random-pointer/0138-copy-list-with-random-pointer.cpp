/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
    void insertatnode(Node* &head,Node* &tail,int data){
        Node* newnode=new Node(data);
        if(head==NULL){
           head=newnode;
           tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        //creating a clone
        Node* clonehead=NULL;
        Node* clonetail=NULL;
        Node* temp=head;
        while(temp!=NULL){
            insertatnode(clonehead,clonetail,temp->val);
            temp=temp->next;
        }
        //makng pattern
        Node* original=head;
        Node* clone=clonehead;
        while(original!=NULL && clone!=NULL){
            Node* next=original->next;
            original->next=clone;
            original =next;
            next=clone->next;
            clone->next=original;
            clone=next;
        }
        //creating random pointer 
        temp=head;
        while(temp!=NULL){
           if(temp->next!=NULL){
            temp->next->random=temp->random?temp->random->next:temp->random;

           }
            temp=temp->next->next;
        }
        //revert changes
        original=head;
        clone=clonehead;
        while(original!=NULL && clone!=NULL){
            original->next=clone->next;
            original=original->next;
            if(original!=NULL){
                clone->next=original->next;
                clone=clone->next;
            }
        }
        return clonehead;
    }
};