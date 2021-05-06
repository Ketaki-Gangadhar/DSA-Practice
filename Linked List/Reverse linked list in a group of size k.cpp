class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
          node* curr=head, *prevFirst=NULL;
        bool isFirstPass = true;
        
        while(curr!=NULL)
        {
            node* first=curr,*prev=NULL;
            int count=0;
       
            
            while(curr!=NULL && count<k)
            {
                node* next = curr->next;
                curr->next = prev;
                prev=curr;
                curr=next;
                count++;
            }

             if(isFirstPass){head=prev; isFirstPass=false;}
            else
            {
                prevFirst->next = prev;}
            
                prevFirst = first;
          
            }
            
        
        return head;
    }
};