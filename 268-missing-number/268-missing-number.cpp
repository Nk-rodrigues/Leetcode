class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        int res = nums.size();
        for(auto& num:nums){
            res ^= num;
            res ^= i;
            i++;
        }
        return res;
    }
};