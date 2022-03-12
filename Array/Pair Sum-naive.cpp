vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>>ans;
    
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            vector<int>v;
            if(arr[i]+arr[j]==s){
                v.push_back(min(arr[i],arr[j]));
                v.push_back(max(arr[i],arr[j]));
                ans.push_back(v);
            }
        }
    }
    
    sort(ans.begin(),ans.end());
    return ans;
    
}