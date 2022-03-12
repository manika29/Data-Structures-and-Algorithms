vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    int start=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]<0){
            swap(nums[i],nums[start]);
            start++;
        }
    }
    return nums;
}