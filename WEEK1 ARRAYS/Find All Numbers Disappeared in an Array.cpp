// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]
// Example 2:

// Input: nums = [1,1]
// Output: [2]
 

// Constraints:

// n == nums.length
// 1 <= n <= 105
// 1 <= nums[i] <= n


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> dis;
        sort(nums.begin(), nums.end());
        for(int i =1;i<=nums.size();i++){
            if (!binary_search(begin(nums), end(nums),i)){
                dis.push_back(i);
            }
        }
        return dis;
    }
};