class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.length();
        
        while (low < high) {
            while(low < high and !(isalnum(s[low]))) low++;
            while(low < high and !(isalnum(s[high]))) high--;
            
            if(low < high and tolower(s[low++]) != tolower(s[high--])) return false;
        }
        return true;
    }
};