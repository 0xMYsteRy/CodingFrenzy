/*
 * @lc app=leetcode id=1929 lang=cpp
 *
 * [1929] Concatenation of Array
 */

// @lc code=start
#include <vector>
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(2*nums.size(), 0);

        // One loop
        for (int i = 0; i < 2*nums.size(); i++) {
            result[i] = nums[i%(nums.size())];
        }

        // Two loop
        // for (int i = 0; i < nums.size(); i++) {
        //     // First half array
        //     result[i] = nums[i];
            
        //     // Second half array
        //     result[i + nums.size()] = nums[i];
        // }

        return result;
    }
};
// @lc code=end

