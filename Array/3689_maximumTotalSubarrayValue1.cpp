// Author : Shantanu Kundu
// Date: 09/06/2026

/*
========================================
MAXIMUM TOTAL SUBARRAY VALUE 1 - LEETCODE 3689
========================================

Description:
You are given an integer array nums of length n and an integer k.
You need to choose exactly k non-empty subarrays nums[l..r] of nums. Subarrays may overlap, and the exact same subarray (same l and r) can be chosen more than once.
The value of a subarray nums[l..r] is defined as: max(nums[l..r]) - min(nums[l..r]). The total value is the sum of the values of all chosen subarrays.

Return the maximum possible total value you can achieve.

----------------------------------------
Example 1
----------------------------------------

Input: nums = [1,3,2], k = 2
Output: 4
Explanation:
One optimal approach is:

Choose nums[0..1] = [1, 3]. The maximum is 3 and the minimum is 1, giving a value of 3 - 1 = 2.
Choose nums[0..2] = [1, 3, 2]. The maximum is still 3 and the minimum is still 1, so the value is also 3 - 1 = 2.
Adding these gives 2 + 2 = 4.

----------------------------------------
Example 2
----------------------------------------

Input: nums = [4,2,5,1], k = 3
Output: 12
Explanation:
One optimal approach is:

Choose nums[0..3] = [4, 2, 5, 1]. The maximum is 5 and the minimum is 1, giving a value of 5 - 1 = 4.
Choose nums[0..3] = [4, 2, 5, 1]. The maximum is 5 and the minimum is 1, so the value is also 4.
Choose nums[2..3] = [5, 1]. The maximum is 5 and the minimum is 1, so the value is again 4.
Adding these gives 4 + 4 + 4 = 12.
 
----------------------------------------
Example 3
----------------------------------------

Input: nums = [22], k = 1
Output: 0

----------------------------------------
Example 4
----------------------------------------

Input: nums = [701025805,484014287,486484825,479659005,127752519,497392660,905035207,885813233,36336196,83624455,562558760,
504283643,414557507,340461196,75269772,787067318,310705037,994901461,
509673195,908722607,69228965,239220571,719440526,986897320], k = 78

Output: 74768090670


========================================
SOLUTION 
========================================

Time Complexity  : O(n)
Space Complexity : O(1)

*/

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int min = INT_MAX, max = INT_MIN;
        for(int i: nums){
            if(i < min)
                min = i;
            if(i > max)
                max = i;    
        }
        return (long long)(max-min)*k;  //Incase of integer overflow. Refer to Example 4.
    }
};