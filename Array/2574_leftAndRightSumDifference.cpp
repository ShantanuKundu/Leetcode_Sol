// Author : Shantanu Kundu
// Date: 06/06/2026

/*
========================================
LEFT AND RIGHT SUM DIFFERENCE - LEETCODE 2574
========================================

Description:
You are given a 0-indexed integer array nums of size n.

Define two arrays leftSum and rightSum where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return an integer array answer of size n where answer[i] = |leftSum[i] - rightSum[i]|.


----------------------------------------
Example 1
----------------------------------------

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].

----------------------------------------
Example 2
----------------------------------------

Input: cost = [6,5,7,9,2,2]
Output: 23
Explanation: The way in which we can get the minimum cost is described below:
- Buy candies with costs 9 and 7
- Take the candy with cost 6 for free
- We buy candies with costs 5 and 2
- Take the last remaining candy with cost 2 for free
Hence, the minimum cost to buy all candies is 9 + 7 + 5 + 2 = 23.

----------------------------------------
Example 3
----------------------------------------

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].


========================================
SOLUTION 
========================================

Time Complexity  : O(n)
Space Complexity : O(n)

*/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum, rightSum;
        int n = nums.size(), sum=0;
        //First element for Left Sum will be 0.
        leftSum.push_back(sum);
        //Left Sum vector      
        for(int i = 0; i<n-1; i++){
            sum+=nums[i];
            leftSum.push_back(sum);
        } 
        sum = 0;

        //Last element of Right Sum will be 0;
        rightSum.push_back(sum);
        //Right Sum vector 
        for(int i=n-1; i>0; i--){
            sum+=nums[i];
            rightSum.push_back(sum);
        } 
        //Reversing the vector
        reverse(rightSum.begin(), rightSum.end());

        vector<int> answer;
        for(int i = 0; i<n; i++){
            answer.push_back(abs(leftSum[i]  - rightSum[i]));
        }
        return answer;
    }
};
