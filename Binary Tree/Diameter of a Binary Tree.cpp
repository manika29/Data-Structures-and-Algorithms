/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    pair<int,int> finddiameter(Node* root){
        if(root==NULL)
        {
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        
        pair<int,int>left=finddiameter(root->left);
        pair<int,int>right=finddiameter(root->right);
        
        int op1=left.first;
        int op2=right.first;
        int op3=1+left.second+right.second;
        
        pair<int,int>ans;
        ans.first=max(op1,max(op2,op3));
        ans.second=1+max(left.second,right.second);
        
        return ans;
    }
    
    int diameter(Node* root) {
        // Your code here
        
        
        //Method 1 - 
        // 1 - calculate the diameter of left subtree
        // 2 - calculate the diameter of right subtree
        // 3 - both i.e 1 + height(left) + height(right)
        
        // ans=max(1+2+3)
        // T(n)=O(n2)
        
        //Method 2
        // T(n) - O(n)
        
        
        pair<int,int>result=finddiameter(root);
        return result.first;
        
        
        
        
        
    }
};