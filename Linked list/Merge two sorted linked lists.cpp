Node* sortedMerge(Node* head1, Node* head2)  
{  
    // Method 1

    // Node *head=NULL;
    // Node* tail=NULL;
    
    // if(head1==NULL)
    // return head2;
    
    // if(head2==NULL)
    // return head1;
    
    // if(head1->data < head2->data){
    //     head=tail=head1;
    // }
    // else
    // head=tail=head2;
    
    // while(head1 && head2){
    //     if(head1->data < head2->data){
    //         tail->next=head1;
    //         tail=head1;
    //         head1=head1->next;
    //     }
    //     else{
    //         tail->next=head2;
    //         tail=head2;
    //         head2=head2->next;
    //     }
    // }
    
    // if(head1==NULL)
    // tail->next=head2;
    
    // else
    // tail->next=head1;
    
    // return head;


    //Method 2
    
    Node* temp = new Node(0);
    Node* res = temp;
   
   while(head1!=NULL && head2!=NULL)
   {
       if(head1->data < head2->data){
           temp->next = head1 ;
           temp = temp->next;
           head1 = head1->next;
       }
       else{
           temp->next = head2 ;
           temp = temp->next;
           head2 = head2->next;
       }
   }
   if(head1) temp->next = head1;
   else temp->next = head2;
   return res->next;
}  