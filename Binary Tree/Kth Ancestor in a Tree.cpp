Node* solve(Node* root,int &k,int node){
    if(root==NULL)
    return NULL;
    
    if(root->data==node)
    return root;
    
    Node* left=solve(root->left,k,node);
    Node* right=solve(root->right,k,node);
    
    //return
    if(left==NULL && right!=NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        else
        return right;
    }
    
    if(left!=NULL && right==NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        else
        return left;
    }
    
    return NULL;
    
}
// your task is to complete this function
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    Node*ans=solve(root,k,node);
    if(ans==NULL || ans->data==node)
    return -1;
    else
    return ans->data;
}