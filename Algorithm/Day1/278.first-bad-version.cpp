/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int low = 1, high = n, mid;
        long int current;
        while (low <= high) {
            int mid = (low + high)/2;

            // If fails, all version on right hand side fails
            if (isBadVersion(mid)) {
                current = mid;
                high = mid -1;
            }

            // Else move toward one element from the left
            else {
                low = mid +1;
            }
        }

        return current;
    }
};
// @lc code=end

