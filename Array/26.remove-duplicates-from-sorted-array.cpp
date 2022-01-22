/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start

#include <vector>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Test case with arr[]
        if (nums.empty()) {
            return 0;
        }
        
        // Two pointers
        int index = 0;
        for (int j = 1; j <  nums.size(); j++) {
            if (nums[index] != nums[j]) {
                index++;
                nums[index] = nums[j];
            }
        }
        return index + 1;
    }
};
// @lc code=end

