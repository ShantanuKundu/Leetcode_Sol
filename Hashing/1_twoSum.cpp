class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> pos;
        for(int i=0; i<nums.size(); i++){
            int rem = target - nums[i];
            if(mp.find(rem) != mp.end()){
               pos.push_back(mp[rem]);
               pos.push_back(i); 
               return pos; 
            }
            mp[nums[i]]=i;
        }
        return pos;
    }
};
