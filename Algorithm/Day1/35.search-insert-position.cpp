/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start

/*
Binary search:
    Time complexity: O(log N)
    Space complexity: O(1)
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //Case where target > the last element in the array
        if (nums[nums.size()-1] < target) {
            // Put in the end of the array
            return nums.size();
        }

        int low = 0, high = nums.size() -1; 
        while (low <= high) {
            int mid = (high + low) /2;
            if (nums[mid] == target) {
                return mid;
            }

            else if (nums[mid] < target) {
                low = mid + 1;
            }

            else {
                high = mid -1;
            }
        }
        return high + 1;
    }
};
// @lc code=end

