class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> Umap;
        for(int i=0; i<nums.size(); i++){
            if(Umap.find(target-nums[i]) != Umap.end()){
                result.push_back(Umap[target-nums[i]]);
                result.push_back(i);
                return result;
            }
            Umap[nums[i]] = i;
        }
        return result;
    }
};