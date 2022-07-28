class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> alpha(26);
        for(int i=0; i<s.length();i++)
            alpha[s[i]-'a']++;
        for(int i=0; i<t.length(); i++){
            int x = --alpha[t[i]-'a'];
            if(x <0) return false;
        }
        return true;
    }
};