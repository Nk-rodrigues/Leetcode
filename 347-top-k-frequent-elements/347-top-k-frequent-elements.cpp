class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<vector<int>> temp(nums.size()+1);
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        
        for(auto& m:map){
            temp[m.second].push_back(m.first);
        }
        reverse(temp.begin(), temp.end());
        vector<int> ans;
        for(auto& t:temp){
            for(auto& val:t){
                ans.push_back(val);
                if (ans.size() == k) return ans;
            }
        }
        return ans;
    }
};