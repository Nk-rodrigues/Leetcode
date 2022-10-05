class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ans(256, 0);
        for(int i=0; i<s.size(); i++){
            ans[s[i]-1]++;
        }
        for(int i=0; i<t.size(); i++){
            ans[t[i]-1]--;
        }
        for(int i=0; i<ans.size(); i++){
            if (ans[i] != 0) return false;
        }
        
        return true;
        
    }
};