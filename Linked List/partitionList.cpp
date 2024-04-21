//   Leetcode : https://leetcode.com/problems/partition-list/
  ListNode* partition(ListNode* head, int x) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode *prev=new ListNode(-1),*curr=new ListNode(-1);
        ListNode *temp=head,*ans=prev;
        while(temp){
            if(temp->val<x){
                prev->next=new ListNode(temp->val);
                prev=prev->next;
                
            }
            else{
                curr->next=new ListNode (temp->val);
                curr=curr->next;
            }
            temp=temp->next;
        }
        prev->next=curr->next->next;
        return ans->next;
    }