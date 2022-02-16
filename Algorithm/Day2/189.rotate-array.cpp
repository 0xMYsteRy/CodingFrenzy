/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

/*
    //time: O(N), space: O(1)
*/
// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //Test aray: 1,2,3,4,5,6,7 ; k =3, right rotate

        reverse(nums.begin(), nums.end()); //7,6,5,4,3,2,1 => 7,6,5 || 4,3,2,1

        
        reverse(nums.begin(), nums.begin()+k); //5,6,7,4,3,2,1 => 5,6,7 || 4,3,2,1


        reverse(nums.begin()+k, nums.end()); // 5,6,7 || 1,2,3,4
    }
};
// @lc code=end

