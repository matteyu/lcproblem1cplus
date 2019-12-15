/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool secondIt = false;
        unordered_map<int,int> m;

        secondLoop:
            int i=0;
            for(i; i<nums.size(); i++){
                if(secondIt){
                    if(m.find(target-nums[i]) != m.end() && m[target-nums[i]] != i)
                        return {i,m[target-nums[i]]};
                }
                else{
                    m[nums[i]] = i;
                }
            }
            secondIt = true;
            goto secondLoop;
        return {};

    }
};
// @lc code=end

