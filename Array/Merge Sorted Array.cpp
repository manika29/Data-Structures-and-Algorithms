class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int count=1;
        while(count<=n){
            nums1.pop_back();
            count++;
        }
        
        for(int i=0; i<n; i++){
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin(),nums1.end());
    }
};