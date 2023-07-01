int majorityElement(int* nums, int numsSize){
    int majorityElementVal = nums[0];
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (count == 0)
        {
            majorityElementVal = nums[i];
        }
        count += (majorityElementVal == nums[i]) ? 1 : -1;
    }
    return majorityElementVal;

}