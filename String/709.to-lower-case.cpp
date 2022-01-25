/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string str) {

        // A - Z
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] - 'A' + 'a';
            }
        }
        return str;
    }
};
// @lc code=end

