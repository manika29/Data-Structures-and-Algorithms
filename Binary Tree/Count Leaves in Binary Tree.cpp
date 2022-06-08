/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
 void solve(Node* root , int &count){
      
      if(root==NULL){
          return;
      }
      
      if(root->left==NULL && root->right==NULL){
          count+=1;
      }
      solve(root->left,count);
      solve(root->right , count);
  }
 
int countLeaves(Node* root)
{
 // Your code here
 int count=0;
 if(root==NULL){
     return count;
 }

 solve(root,count);
 
 return count;
 
}
