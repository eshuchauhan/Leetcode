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
     ListNode* reverseList(ListNode *head)
    {
        // code here
        // return head of reversed list
        ListNode *prevnode=0,*currentnode=head,*nextnode=head;
        while(nextnode!=NULL)
        {
            nextnode=currentnode->next;
            currentnode->next=prevnode;
            prevnode=currentnode;
            currentnode=nextnode;
        }
        head=prevnode;
        return head;
    }
    
ListNode *merge(ListNode *head1, ListNode*head2)
{
    ListNode *x=new ListNode(-1);
    ListNode *temp1=head1;
    ListNode *temp2=head2;
    
    ListNode *ans=x;
    
    bool flag=0;
    
    while(temp1!=NULL && temp2!=NULL)
    {
        if(flag==0)
        {
            ans->next=temp1;
            ans=ans->next;
            
            temp1=temp1->next;
            flag=1;
        }
        else if(flag==1)
        {
            ans->next=temp2;
            ans=ans->next;
            
            temp2=temp2->next;
            flag=0;
        }
    }
    
    while(temp2!=NULL)
    {
        ans->next=temp2;
        ans=ans->next;
        temp2=temp2->next;
    }
    x=x->next;
    return x;
}
    void reorderList(ListNode* head) {
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    
    ListNode *slow=head,*fast=head,*prev=head;
    
    // find middle
    
    while(fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    
    prev->next=NULL;
    ListNode *l1=head;
  
  // reverse
    ListNode *l2=reverseList(slow);
    
    // merge
    
    merge(l1,l2);
        
    }
};
