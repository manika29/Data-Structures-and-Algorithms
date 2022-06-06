class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int N=nums.size();
        
        int sum=0;
        for(int i=0; i<N; i++){
            sum=sum+nums[i];
        }
         bool t[N+1][sum+1];
        
        //Initialize
        for(int i=0; i<N+1; i++){
            for(int j=0; j<sum+1; j++){
                if(i==0)
                t[i][j]=false;
                if(j==0)
                t[i][j]=true;
            }
        }
        
        //Main Code
        for(int i=1; i<N+1; i++){
            for(int j=1; j<sum+1; j++){
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
                }
                else
                t[i][j]=t[i-1][j];
            }
        }
        
        int mini=1e9;
        for(int i=0; i<sum/2; i++){
            if(t[N][i]==true){
                int s1=i;
                int s2=sum-i;
                mini=min(mini,abs(s1-s2));
            }
        }
        
        return mini;
        
    }
};