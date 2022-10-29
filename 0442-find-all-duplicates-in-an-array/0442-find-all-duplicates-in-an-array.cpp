class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        
        if (n == 0) return { };
        
        for(int i=0; i<n; i++) {
            
            if (nums[abs(nums[i])-1] < 1) {
                result.push_back(abs(nums[i]));
            }
            
            else {
                nums[abs(nums[i])-1] *= -1;
            }
        }
        return result;
    }
};