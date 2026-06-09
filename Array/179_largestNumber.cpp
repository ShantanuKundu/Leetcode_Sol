// Author : Shantanu Kundu
// Date: 09/06/2026

/*
========================================
LARGEST NUMBER - LEETCODE 179
========================================

Description:
Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
Since the result may be very large, so you need to return a string instead of an integer.

----------------------------------------
Example 1
----------------------------------------

Input: nums = [10,2]
Output: "210"

----------------------------------------
Example 2
----------------------------------------

Input: nums = [3,30,34,5,9]
Output: "9534330"
 
 
========================================
SOLUTION 
========================================

Time Complexity  : O(n2.k)
Space Complexity : O(n.k)

*/

class Solution {
public:

    void swapStr(string &s1, string &s2){
        string temp = s1;
        s1 = s2;
        s2 = temp;
    }

    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> str_nums, ans;
        //Cnverting all numers to String
        for(int i: nums)
            str_nums.push_back(to_string(i));
   
        ans.push_back(str_nums[0]);
        //int s = ans.size(); 
        for(int i = 1; i<n; i++){
            ans.push_back(str_nums[i]);
            for(int j = i-1; j>=0; j--){ 
                if((ans[j] + ans[j+1]) < (ans[j+1] + ans[j])){
                    swapStr(ans[j], ans[j + 1]);
                }  
                else
                    break;
            }
        } 
        string res;
        for(string x: ans)
            res+=x;
        
        if(res[0] == '0')
            return "0";    

        return res;    
    }
};

//Optimal Solution:
//Time Complexity  : O(n logn.k)
//Space Complexity : O(n.k)
class Solution {
public:
    static bool cmp(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> str_nums;

        for(int x : nums)
            str_nums.push_back(to_string(x));

        sort(str_nums.begin(), str_nums.end(), cmp);

        string res = "";

        for(string s : str_nums)
            res += s;

        if(res[0] == '0')
            return "0";

        return res;
    }
};