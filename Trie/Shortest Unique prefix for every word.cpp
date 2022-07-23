//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class trie{
  public:
  trie* child[26];
  int freq;
  
  //constructor
  trie(){
      for(int i=0; i<26; i++)
        child[i]=0;
        
        freq=0;
  }
  
  //insert in trie
  void insert(trie* root, string key){
      trie* curr=root;
      int idx;
      
      for(int i=0; i<key.size(); i++){
          idx=key[i]-'a';
          if(curr->child[idx]==0)
          curr->child[idx]=new trie();
          
          curr=curr->child[idx];
          curr->freq+=1;
      }
  }
  
  //unique prefix function
  string uniquePrefix(string key, trie *root){
      string ans;
      trie *curr=root;
      int idx;
      
      for(int i=0; i<key.size(); i++){
          idx=key[i]-'a';
          if(curr->child[idx]->freq==1){
              ans.push_back(idx+'a');
              return ans;
          }
          
          else
              ans.push_back(idx+'a');
           
           curr=curr->child[idx];   
          
      }
      
      return ans;
  }
  
};

class Solution
{
    public:
    vector<string> findPrefixes(string arr[], int n)
    {
        //code here
        trie* root=new trie();
        vector<string>ans;
        trie tr;
        
        for(int i=0; i<n; i++){
            tr.insert(root,arr[i]);
        }
        
        for(int i=0; i<n; i++){
            ans.push_back(tr.uniquePrefix(arr[i],root));
        }
        
        return ans;
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}

// } Driver Code Ends