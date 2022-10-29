class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size();
        
        for(int& num: nums) {
            
            while(num > 0 and num <= size and num != nums[num-1]) {
                swap(num, nums[num-1]);
            }
        }
        
        for(int i=0; i<size; i++) {
            if (nums[i] != i+1) {
                return i+1;
            }
        }
        return size+1;
    }
};