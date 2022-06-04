class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int farthest=0,jumps=0,curr=0;
        for(int i=0; i<n-1; i++){
            farthest=max(farthest,nums[i]+i);
            if(i==curr){
                jumps++;
                curr=farthest;
            }
        }
        
        if(curr<n-1)
        return false;
        else
        return true;
    }
};