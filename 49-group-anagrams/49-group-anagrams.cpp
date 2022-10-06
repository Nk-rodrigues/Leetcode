class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> Umap;
        vector<vector<string>> ans;
        
        for(auto& s:strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            Umap[temp].push_back(s);
        }
        
        for(auto& s:Umap){
            ans.push_back(s.second);
        }
        return ans;
    }
};