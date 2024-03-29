class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int forward = 1;
        int backward = 1;
        vector<int> res(n, 1);
        
        for(int i=0; i<n; i++){
            res[i] *= forward;
            forward *= nums[i];
        }
        
        for(int i=n-1; i>=0; i--){
            res[i] *= backward;
            backward *= nums[i];
        }
        
        return res;
    }
};