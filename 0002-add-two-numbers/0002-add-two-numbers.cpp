
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy=new ListNode(0);
        ListNode*curr=dummy;
        ListNode*temp=l1;
        ListNode*temp2=l2;
        int carry=0;
        


        while(temp!=NULL || temp2!=NULL||carry!=0){
            int sum=carry;
         if(temp!=NULL){
            sum+=temp->val;
            temp=temp->next;
         }

         if(temp2!=NULL){
            sum+=temp2->val;
            temp2=temp2->next;
         }

            int digit=sum%10;
            carry=sum/10;

            curr->next=new ListNode(digit);
            curr=curr->next;

        }

        return dummy->next;

    }
};