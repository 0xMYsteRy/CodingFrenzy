/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
/*
Thought process:
Binary search:
    Time complexity: O(log n)
    Space complexity: O(1)
*/

#include <vector>
#include <stdio.h>

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) /2;
            if (nums[mid] == target) {
                return mid;
            }

            else if (nums[mid] < target) {
                low = mid +1;
            }

            else {
                high = mid -1;
            }
        }

        // If not found return -1
        return -1;
    }
};
// @lc code=end

