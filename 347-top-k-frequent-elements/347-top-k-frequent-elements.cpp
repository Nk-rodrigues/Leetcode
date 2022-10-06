class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        for(auto& m:map){
            pq.push(make_pair(m.second, m.first));
        }
        
        for(int i=0; i<k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};