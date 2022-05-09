class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int i, candidate = -1, votes = 0;
    // Finding majority candidate
    for (i = 0; i < nums.size(); i++) {
        if (votes == 0) {
            candidate = nums[i];
            votes = 1;
        }
        else {
            if (nums[i] == candidate)
                votes++;
            else
                votes--;
        }
    }
    int count = 0;
    // Checking if majority candidate occurs more than n/2
    // times
    for (i = 0; i < nums.size(); i++) {
        if (nums[i] == candidate)
            count++;
    }
 
    if (count > nums.size() / 2)
        return candidate;
    return -1;
    }
};