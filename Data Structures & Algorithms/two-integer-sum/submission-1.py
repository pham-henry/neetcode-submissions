class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        seen = {}

        for i in range(len(nums)):
            if (seen.get(target - nums[i]) == None):
                seen.setdefault(nums[i], i) 
            else:
                return [seen.get(target - nums[i]), i]
        
        return None
            

        