// Author : Shantanu Kundu
// Date: 10/06/2026

/*
========================================
MAXIMUM TOTAL SUBARRAY VALUE 2 - LEETCODE 3691 [UNSOLVED FOR LARGESR SIZE: TLE]
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
 

========================================
SOLUTION 
========================================

Time Complexity  : O(n2 logn)
Space Complexity : O(n2)

*/

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) { 
        int n = nums.size();
        vector<int> res;

        for(int i = 0; i<n; i++){
            int minNum = nums[i];
            int maxNum = nums[i];

            for(int j = i; j<n; j++){ 
                minNum = min(minNum, nums[j]);
                maxNum = max(maxNum, nums[j]);
                res.push_back(maxNum-minNum);
            }
            
        } 

        sort(res.begin(), res.end());
        long long sum = 0;
        for(int i = res.size()-1; i >= 0 && k != 0; i--, k--)
            sum+=res[i];

        return sum;    
    }
};