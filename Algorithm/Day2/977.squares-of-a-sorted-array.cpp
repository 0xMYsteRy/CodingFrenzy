/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start

/*
Thought process:
Trivial process: Square each element then sort in accending order
    Time complexity: O(n) (square throught array) + O(Nlog n) (sort) => O(Nlog n)
    Space complexity: O(N)

Approach 2: Two pointers

*/
#include <vector>
#include <stdio.h>

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        sort(nums.begin(), nums.end(), [](int i, int j){
            return abs(i) < abs(j);}
        );

        vector<int> result; 
        // for (int i = 0; i < nums.size(); i++) {
        //     result.emplace_back(i * i);
        // }

        for (auto i:nums) {
            result.emplace_back(i * i);
        }

        return result; 
    }
};
// @lc code=end

