#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;

        if (nums.size() <= 0) {
            return false;
        }

        for (int i = 0; i <= nums.size() - 1; i++ ) {
            if (seen.count(nums[i])) {
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
    
};