class Solution{
    public:
    
    void createMapping(int in[],map<int,int>&nodeToIndex,int n){
        for(int i=0; i<n; i++)
        nodeToIndex[in[i]]=i;
    }
    
    Node* solve(int in[],int pre[], int n,int &preorderIndex,map<int,int>&nodeToIndex,int inorderStart,int inorderEnd){
        //base case
        if(preorderIndex>=n || inorderStart>inorderEnd)
        return NULL;
        
        int element=pre[preorderIndex++];
        Node* root=new Node(element);
        int index=nodeToIndex[element];
        
        root->left=solve(in,pre, n,preorderIndex,nodeToIndex,inorderStart,index-1);
        root->right=solve(in,pre, n, preorderIndex,nodeToIndex, index+1,inorderEnd);
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preorderIndex=0;
        map<int,int>nodeToIndex;
        createMapping(in,nodeToIndex,n);
        Node* res=solve(in,pre,n,preorderIndex,nodeToIndex,0,n-1);
        return res;
    }
};