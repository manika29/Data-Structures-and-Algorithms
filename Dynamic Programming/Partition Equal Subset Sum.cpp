class Solution {
public:
    int SubsetSum(vector<int>&arr, int sum){
        // code here 
        int N=arr.size();
        int t[N+1][sum+1];
        
        //Initialize
        for(int i=0; i<N+1; i++){
            for(int j=0; j<sum+1; j++){
                if(i==0)
                t[i][j]=0;
                if(j==0)
                t[i][j]=1;
            }
        }
        
        //Main Code
        for(int i=1; i<N+1; i++){
            for(int j=1; j<sum+1; j++){
                if(arr[i-1]<=j){
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else
                t[i][j]=t[i-1][j];
            }
        }
        return t[N][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        
        if(sum%2!=0)
        return 0;
        else 
        return SubsetSum(nums,sum/2);
    }
};