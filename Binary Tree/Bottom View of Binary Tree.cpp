class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        map<int,int>topNode;
        queue<pair<Node*,int>>q;
        vector<int>ans;
        
        if(root==NULL)
        return ans;
        
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*,int>temp=q.front();
            q.pop();
            
            Node* p=temp.first;
            int hd=temp.second;
            
            
            topNode[hd]=p->data;
            
            
            if(p->left)
                q.push(make_pair(p->left, hd-1));
            if(p->right)
                q.push(make_pair(p->right, hd+1));
        }
        
        for(auto i:topNode) 
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};