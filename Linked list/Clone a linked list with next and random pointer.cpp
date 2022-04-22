class Solution
{
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        
        //create a copy of every node
        Node* curr=head;
        Node* next=NULL;
        for(curr=head; curr!=NULL; ){
            next=curr->next;
            curr->next=new Node(curr->data);
            curr->next->next=next;
            curr=next;
        }
        
        //clone all the random(arb) pointers
        for(curr=head; curr!=NULL; curr=curr->next->next){
            curr->next->arb=(curr->arb!=NULL)?curr->arb->next:NULL;
        }
        
        //clone the next pointer
        Node* original=head;
        Node* copy=head->next;
        
        Node* temp=copy;
        
        while(original && copy){
        original->next = original->next? original->next->next : original->next;
        copy->next = copy->next?copy->next->next:copy->next;
        original = original->next;
        copy = copy->next;
        }
        
        return temp;
        
        
    }

};