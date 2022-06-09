void createMapping(int in[],map<int,int>&nodeToIndex,int n){
        for(int i=0; i<n; i++)
        nodeToIndex[in[i]]=i;
    }
    
    Node* solve(int in[],int post[], int n,int &postorderIndex,map<int,int>&nodeToIndex,int inorderStart,int inorderEnd){
        //base case
        if(postorderIndex<0 || inorderStart>inorderEnd)
        return NULL;
        
        int element=post[postorderIndex--];
        Node* root=new Node(element);
        int index=nodeToIndex[element];
        
        root->right=solve(in,post, n, postorderIndex,nodeToIndex, index+1,inorderEnd);
        root->left=solve(in,post, n,postorderIndex,nodeToIndex,inorderStart,index-1);
        
        
        return root;
    }
//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int postorderIndex=n-1;
        map<int,int>nodeToIndex;
        createMapping(in,nodeToIndex,n);
        Node* res=solve(in,post,n,postorderIndex,nodeToIndex,0,n-1);
        return res;
}