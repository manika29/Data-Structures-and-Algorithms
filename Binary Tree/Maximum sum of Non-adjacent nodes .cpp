class Solution{
  public:
  
  pair<int,int>solve(Node*root){
      if(root==NULL)
      {
          pair<int,int>p=make_pair(0,0);
          return p;
      }
      
      pair<int,int> left=solve(root->left);
      pair<int,int> right=solve(root->right);
      
      pair<int,int>ans;
      ans.first=root->data+left.second+right.second;
      ans.second=max(left.first,left.second)+max(right.first,right.second);
      
      return ans;
  }
  
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int>res=solve(root);
        return max(res.first,res.second);
    }
};