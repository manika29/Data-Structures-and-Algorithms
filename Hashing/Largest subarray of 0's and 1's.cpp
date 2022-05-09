class Solution {
public:
    int lenOfLongSubarr(vector<int> &nums, int n, int k){
     int ps=0;
     int res=0;
     unordered_map<int,int> um;
     for(int i=0 ; i<n;i++)
     {
         ps+=nums[i];
         if(ps==k)
          res=i+1;
         if(um.find(ps) == um.end())
          um.insert({ps,i});
         if(um.find(ps-k) != um.end())
          res=max(res, i- um[ps-k]);
     }
     return res;
    }
    
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0)
                nums[i]=-1;
        }
        
        return lenOfLongSubarr(nums,n,0);
    }
};