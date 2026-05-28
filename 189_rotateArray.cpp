// Author : Shantanu Kundu
// Date: 28/05/2026

/*
========================================
ROTATE ARRAY - LEETCODE 189
========================================

Description:
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

----------------------------------------
Example 1
----------------------------------------

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

----------------------------------------
Example 2
----------------------------------------

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]


========================================
SOLUTION 
========================================

Time Complexity  : O(n)
Space Complexity : O(1)

*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>=0){
            k=k%nums.size(); // if number of elements > rotation, then in order to remove the repeatative rotations.
            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.begin()+k);
            reverse(nums.begin()+k, nums.end());
        }
    }
};