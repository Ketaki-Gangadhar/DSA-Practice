class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(slow && fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow == fast)
            {
                fast=fast;
                slow=head;
                while(slow != fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return fast;
            }
        }
        return NULL;
        
    }
};