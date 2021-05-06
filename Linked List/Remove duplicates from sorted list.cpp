class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        
        if(head==NULL || head->next==NULL)return head;
        
        ListNode* curr = head;
        int value;
        
        while(curr!=NULL && curr->next!=NULL)
        {
             value = curr->val;
            if(curr->next->val == value)
            {
                curr->next=curr->next->next;
            }
            else
            {curr=curr->next;}
             
        }
        
        return head;
        
    }
};