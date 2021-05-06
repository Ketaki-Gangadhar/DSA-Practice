class Solution
{
    public:
    Node * removeDuplicates( Node *head) 
    {
      unordered_set<int>s;
      
      Node* curr = head,*prev=head;
      
      while(curr!=NULL)
      {
          if(s.find(curr->data)==s.end())
          {
              prev=curr;
              s.insert(curr->data);
              curr=curr->next;
          }
          else
          {
              prev->next=curr->next;
              curr=prev->next;
          }
           
      }
    return head;
    }
};