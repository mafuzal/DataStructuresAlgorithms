class Solution {
    public int majorityElement(int[] nums) {
      int count = 0;
      int majorityElementVal = nums[0];
      for ( int i = 0; i < nums.length; i++)
      {
        if (count == 0)
        {
          majorityElementVal = nums[i];
        }
        if (majorityElementVal == nums[i])
        {
          count++;
        }
        else
        {
          count--;
        }
      }
      return majorityElementVal;
        
    }
}