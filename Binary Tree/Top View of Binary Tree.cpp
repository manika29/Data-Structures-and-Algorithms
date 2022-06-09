class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
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
            
            if(topNode.find(hd)==topNode.end()){
                topNode[hd]=p->data;
            }
            
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