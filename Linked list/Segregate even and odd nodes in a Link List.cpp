class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* OS=NULL;
        Node* OE=NULL;
        Node* ES=NULL;
        Node* EE=NULL;
        
        for(Node* curr=head; curr!=NULL; curr=curr->next){
            if(curr->data%2==0){
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
        }
        
        if(OS==NULL || ES==NULL)
        return head;
        
        EE->next=OS;
        OE->next=NULL;
        
        return ES;
    }
};