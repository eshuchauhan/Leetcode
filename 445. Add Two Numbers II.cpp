class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2;
        while(l1!=NULL)
        {
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            s2.push(l2->val);
            l2=l2->next;
        }
        
        int carry=0,x,y;
        ListNode *head=NULL;
        while(s1.size()>0|| s2.size()>0|| carry!=0)
        {
            x=0,y=0;
            if(s1.size()>0)
            {
                x=s1.top();
                s1.pop();
            }
            if(s2.size()>0)
            {
                y=s2.top();
                s2.pop();
            }
            
            int ans=x+y+carry;
            carry=ans/10;
            
            ListNode *node =new ListNode(ans%10);
            node->next=head;
            
            head=node;
        }
        return head;
    }
};
