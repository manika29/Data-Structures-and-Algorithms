// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    private:
    void solve(string &S, int index,set<string>&ans){
        //base case
        if(index>=S.length()){
            ans.insert(S);
            return;
        }
        
        //logic
        for(int j=index; j<S.length(); j++){
            swap(S[index],S[j]);
            solve(S,index+1,ans);
            
            //backtrack
            swap(S[index],S[j]);
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		set<string>ans;
	
        int index=0;
        solve(S,index,ans);
        vector<string> v;
		
		for(auto i: ans){
		        v.push_back(i);
		}
        sort(v.begin(),v.end());
        return v;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends