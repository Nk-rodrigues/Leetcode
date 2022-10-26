class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1;
        int high = nums.size()-1;
        int count;
        
        while(low <= high) {
            
            int mid = low + (high-low)/2;
            count = 0;
            
            for(int &num: nums) {
                
                if (num <= mid) {
                    count++;
                }
            }
            if (count <= mid) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};