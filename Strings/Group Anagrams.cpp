class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        string s;
        map<string,vector<string>>mp;
        
        for(int i=0; i<strs.size(); i++){
            s=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(s);
        }
        
        for(auto it:mp){
            v.push_back(it.second);
        }
        
        return v;
    }
};