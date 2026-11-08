class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // length is always greater than 1 so no need to check for if nums is empty 
        
        unordered_map<int, int> seen;
        seen.insert({nums[0], 0});
        int check; 

        for (int i = 1; i < nums.size(); i++) {
            check = target - nums[i];
            if (seen.contains(check)) {
                return {seen[check], i};
            }
            seen.insert({nums[i], i});
        }

        return {}; 

    }
};
