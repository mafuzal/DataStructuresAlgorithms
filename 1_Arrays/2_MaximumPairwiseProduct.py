class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        maxVal1 = -1

        for i in range(len(nums)):
            if ((maxVal1 == -1) or (nums[i] > nums[maxVal1])):
                maxVal1 = i
        
        
        maxVal2 = -1
        for i in range(len(nums)):
            if ((i != maxVal1) and ((maxVal2 == -1) or (nums[i] > nums[maxVal2]))):
                maxVal2 = i     

        return (nums[maxVal1]) * (nums[maxVal2])   