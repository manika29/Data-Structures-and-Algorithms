class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
   {
       // code here
       // just remove the loop without losing any nodes
       // detect a loop
       if(head== NULL){
           return;
       }
       bool loopDetected= false;
       Node * slow= head, *fast=head;
       while(slow && fast && fast->next){
           slow=slow->next;
           fast=fast->next->next;
           if(slow==fast){
               loopDetected= true;
               break;
           }
       }
       slow= head;
       if(loopDetected && fast!=head){
           while(slow->next!=fast->next){
               slow=slow->next;
               fast=fast->next;
           }
           fast->next=NULL;
       }
       
       else if(loopDetected && fast==head){
           while(fast->next!=slow)
           fast=fast->next;
           
           fast->next=NULL;
       }
 
   }
};