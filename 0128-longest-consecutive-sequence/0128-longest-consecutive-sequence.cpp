class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest_streak = 0;
        
        for(int num: nums){
            if(!(numSet.count(num-1))){
                int currentNum = num;
                int currentStreak = 1;
                
                while(numSet.count(++num)){
                    currentStreak++;
                }
                longest_streak = max(longest_streak, currentStreak);
            }
        }
        return longest_streak;
    }
};