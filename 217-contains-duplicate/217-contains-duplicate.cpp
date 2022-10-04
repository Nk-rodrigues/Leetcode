class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> u_set;
        for(auto& num:nums){
            if(!u_set.insert(num).second) return true;
        }
        return false;
    }
};