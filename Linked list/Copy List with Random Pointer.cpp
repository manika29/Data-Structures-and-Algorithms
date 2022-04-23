class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        unordered_map<Node*,Node*>umap;
        Node* curr=head;
        
        while(curr!=NULL){
            Node* oldtocopy=new Node(curr->val);
            umap[curr]=oldtocopy;
            curr=curr->next;
        }
        
        curr=head;
        
        while(curr!=NULL){
            umap[curr]->next=umap[curr->next];
            umap[curr]->random=umap[curr->random];
            curr=curr->next;
        }
        
        return umap[head];
        
    }
};