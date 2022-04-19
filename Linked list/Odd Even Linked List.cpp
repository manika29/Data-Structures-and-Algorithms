class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* OS=NULL;
        ListNode* OE=NULL;
        ListNode* ES=NULL;
        ListNode* EE=NULL;
        int count=1;
        for(ListNode* curr=head; curr!=NULL; curr=curr->next){
            if(count%2!=0){
                if(ES==NULL){
                    ES=curr;
                    EE=ES;
                }
                else{
                    EE->next=curr;
                    EE=EE->next;
                }
            }
            else{
                if(OS==NULL){
                    OS=curr;
                    OE=OS;
                }
                else{
                    OE->next=curr;
                    OE=OE->next;
                }
            }
            
        count++;
        }
        
        if(OS==NULL || ES==NULL)
        return head;
        
        EE->next=OS;
        OE->next=NULL;
        
        return ES;
    }
};