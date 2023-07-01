class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        majorityElementVal = nums[0]
        count = 0
        for n in range(len(nums)):
            if count == 0:
                majorityElementVal = nums[n]
            count += (1 if majorityElementVal == nums[n] else -1)

        return majorityElementVal