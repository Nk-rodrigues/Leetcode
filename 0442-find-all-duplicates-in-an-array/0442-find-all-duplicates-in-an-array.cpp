class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        
        if (n == 0) return { };
        
        for(int &num: nums) {
            
            if (nums[abs(num)-1] < 1) {
                result.push_back(abs(num));
            }
            
            else {
                nums[abs(num)-1] *= -1;
            }
        }
        return result;
    }
};